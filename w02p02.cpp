#include <iostream>

using namespace std;

class osoba
{
private:
    string imie;
    string nazwisko;

public:
    void setImie(string im) { imie = im; }
    void setNazwisko(string nazw) { nazwisko = nazw; }
    string getImie() { return imie; }
    string getNazwisko() { return nazwisko; }
    void przedstaw_sie(); // sam nagłowek metody
};

void osoba::przedstaw_sie()
{
    cout << "Imie: " << imie << endl
         << "Nazwisko: " << nazwisko;
}

int main()
{
    osoba ktos, ktosInny;
    ktos.setImie("Jan");
    ktos.setNazwisko("Kowalski");

    cout << "Imie: " << ktos.getImie() << endl
         << "Nazwisko: " << ktos.getNazwisko();

    // ktos.przedstaw_sie();
    // ktos.imie = "Jan";
    // ktos.nazwisko = "Kowalski";
    return 0;
}