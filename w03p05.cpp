#include <iostream>
using namespace std;


class osoba
{
private:
    string imie;     // this->imie
    string nazwisko; // this->nazwisko

public:
    osoba(string imie = "NN", string nazwisko = "NN")
    {
        this->imie = imie;
        this->nazwisko = nazwisko;
    }
    void setImie(string imie)
    {
        this->imie = imie;
    }
    void setNazwisko(string nazwisko)
    {
        this->nazwisko = nazwisko;
    }
    string getImie() { return this->imie; } // mogę, ale nie musze - nie ma przesloniecia nazwy
    string getNazwisko() { return nazwisko; }
};

int main()
{
    
    osoba ktos("aaaa","AAAAAA");
    // ktos.setImie("Jan");
    // ktos.setNazwisko("Kowalski");

    cout << "Imie: " << ktos.getImie() << endl
         << "Nazwisko: " << ktos.getNazwisko();

    return 0;
}