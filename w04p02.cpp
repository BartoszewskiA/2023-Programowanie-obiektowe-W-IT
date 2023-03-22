#include <iostream>
#include <ctime>
#include <string>

using namespace std;

class osoba;
void RODO(osoba &k1);

class osoba
{
private:
    string imie;
    string nazwisko;
    int wiek;

public:
    osoba() : imie("NN"), nazwisko("NN"), wiek(0) {}
    osoba(string IMIE, string NAZWISKO, int WIEK)
        : imie(IMIE), nazwisko(NAZWISKO), wiek(WIEK) {}
    void setImie(string imie) { this->imie = imie; }
    void setNazwisko(string nazwisko) { this->nazwisko = nazwisko; }
    void setWiek(int wiek) { this->wiek = wiek; }
    string getImie() { return imie; }
    string getNazwisko() { return nazwisko; }
    int getWiek() { return wiek; }
    void przedstaw_sie(); // nagłowek metody
};

void osoba::przedstaw_sie()
{
    cout << "Imie: " << imie << endl
         << "Nazwisko: " << nazwisko << endl
         << "Wiek: " << wiek;
}

int main()
{
    osoba ktos("Jan", "Kowalski", 30);
    RODO(ktos);
    ktos.przedstaw_sie();
    return 0;
}

void RODO(osoba &k1)
{
    string s = k1.getNazwisko();
    for (int i = 1; i < s.length(); i++)
        s[i] = '*';
    k1.setNazwisko(s);
    k1.przedstaw_sie();
    cout << endl;
}