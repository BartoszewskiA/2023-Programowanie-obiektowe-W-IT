#include <iostream>
#include <ctime>
#include <cmath>
#include <sstream>

using namespace std;

const int ZYCIE = 100;
const int PUNKTY = 30;

struct cios
{
    int atak_fizyczny = 0;
    int atak_magiczny = 0;
    bool podstepny_atak;
};

class postac
{
private:
    string imie;
    int zycie;
    int atak_fizyczny;
    int atak_magiczny;
    int obrona_fizyczna;
    int obrona_magiczna;

public:
    postac(string im) : imie(im), zycie(ZYCIE)
    {
        int atak = round(PUNKTY * procentGauss(3));
        int obrona = PUNKTY - atak;
        atak_fizyczny = round(atak * procentGauss(3));
        atak_magiczny = atak - atak_fizyczny;
        obrona_fizyczna = round(obrona * procentGauss(3));
        obrona_magiczna = obrona - obrona_fizyczna;
    }
    string getImie() { return imie; }
    int getZycie() { return zycie; }
    bool czy_zyje()
    {
        if (zycie > 0)
            return true;
        else
            return false;
    }
    string przedstaw_sie()
    {
        stringstream s;
        s << "\n----------------------------\n"
          << imie << " Zycie=" << zycie
          << "\nAtak fizyczny=" << atak_fizyczny << " Obrona fizyczna=" << obrona_fizyczna
          << "\nAtak magiczny=" << atak_magiczny << " Obrona magiczna=" << obrona_magiczna
          << "\n----------------------------\n";
        return s.str();
    }
    cios zadaj_cios()
    {
        cios c;
        c.atak_fizyczny = round(atak_fizyczny * procentGauss(20, 3));
        c.atak_magiczny = round(atak_magiczny * procentGauss(3));
        if (rand() % 5 == 0)
            c.podstepny_atak = true;
        else
            c.podstepny_atak = false;
        return c;
    }
    void przyjmij_cios(cios c)
    {
        int obrazenia_fizyczne = 0;
        int obrazenia_magiczne = 0;
        if (c.podstepny_atak)
        {
            obrazenia_fizyczne = c.atak_fizyczny;
            obrazenia_magiczne = c.atak_magiczny;
        }
        else
        {
            obrazenia_fizyczne = c.atak_fizyczny - round(obrona_fizyczna * procentGauss(3));
            obrazenia_magiczne = c.atak_magiczny - round(obrona_magiczna * procentGauss(2));
        }
        if (obrazenia_fizyczne < 0)
            obrazenia_fizyczne = 0;
        if (obrazenia_magiczne < 0)
            obrazenia_magiczne = 0;

        zycie = zycie - (obrazenia_fizyczne + obrazenia_magiczne);
    }
    double procentGauss(int skupienie)
    {
        double wynik = 0.0;
        for (int i = 0; i < skupienie; i++)
            wynik += rand() % 100;
        wynik = wynik / skupienie; // wynik w procentach <0, 100)
        return wynik / 100.0;      // wynik  <0, 1)
    }
    double procentGauss(int minimum, int skupienie)
    {
        double wynik = 0.0;
        for (int i = 0; i < skupienie; i++)
            wynik += rand() % (100 - minimum);
        wynik = wynik / skupienie + minimum; // wynik w procentach <minimum, 100)
        return wynik / 100.0;                // wynik  <minimum/100, 1)
    }
};

// paza klasa
void ring(postac zawodnik_1, postac zawodnik_2)
{
    cios c;
    int max_liczba_rund = 100;
    int runda = 0;
    cout << zawodnik_1.przedstaw_sie();
    cout << zawodnik_2.przedstaw_sie();
    while (zawodnik_1.czy_zyje() && zawodnik_2.czy_zyje() && runda < max_liczba_rund)
    {
        c = zawodnik_1.zadaj_cios();
        cout << endl
             << zawodnik_1.getImie() << " (" << zawodnik_1.getZycie() << ") "
             << c.atak_fizyczny << ":" << c.atak_magiczny;
        zawodnik_2.przyjmij_cios(c);
        c = zawodnik_2.zadaj_cios();
        cout << endl
             << zawodnik_2.getImie() << " (" << zawodnik_2.getZycie() << ") "
             << c.atak_fizyczny << ":" << c.atak_magiczny;
        zawodnik_1.przyjmij_cios(c);
        runda++;
    }
    cout << zawodnik_1.przedstaw_sie();
    cout << zawodnik_2.przedstaw_sie();
}

int main()
{
    srand(time(NULL));
    postac gracz1("Conan"), gracz2("Rambo");
    ring(gracz1, gracz2);
    return 0;
}