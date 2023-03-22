#include <iostream>
#include <ctime>
#include <string>

using namespace std;

class osoba
{
private:
    string imie;
    string nazwisko;
    int rok_urodzenia;

public:
    void setImie(string im) { imie = im; }
    void setNazwisko(string nazw) { nazwisko = nazw; }
    void setWiek(int w); // nagłówek
    string getImie() { return imie; }
    string getNazwisko() { return nazwisko; }
    int getWiek();        // nagłówek
    void przedstaw_sie(); // nagłowek metody
};

void osoba::setWiek(int w)
{
    time_t czas_sys = time(NULL);
    tm *czas = localtime(&czas_sys);
    rok_urodzenia = (1900 + czas->tm_year) - w;
}

int osoba::getWiek()
{
    time_t czas_sys = time(NULL);
    tm *czas = localtime(&czas_sys);
    return (1900 + czas->tm_year) - rok_urodzenia;
}

void osoba::przedstaw_sie()
{
    cout << "Imie: " << imie << endl
         << "Nazwisko: " << nazwisko << endl
         << "Rok urodzenia: " << rok_urodzenia << endl
         << "Wiek: " << getWiek();
}

int main()
{
    osoba ktos, ktosInny;
    ktos.setImie("Jan");
    ktos.setNazwisko("Kowalski");
    ktos.setWiek(30);

    ktos.przedstaw_sie();
    // ktos.przedstaw_sie();
    // ktos.imie = "Jan";
    // ktos.nazwisko = "Kowalski";
    return 0;
}