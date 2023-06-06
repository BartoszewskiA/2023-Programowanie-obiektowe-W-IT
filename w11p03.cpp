#include <iostream>

using namespace std;
//===========================================================================//
class Osoba  //klasa abstrakcyjna jako interfejs
{
public:
    void virtual wypisz() = 0;
};
//===========================================================================//
class Student : public Osoba
{
private:
    string imie;
    string nazwisko;
    string kierunek;

public:
    Student(string im, string nazw, string ki) : imie(im), nazwisko(nazw), kierunek(ki) {}
    void wypisz()
    {
        cout << "Student:\n"
             << "Imie:\t\t" << imie
             << "\nNazwisko:\t" << nazwisko
             << "\nKierunek\t" << kierunek;
    }
};
//===========================================================================//
class Wykladowca : public Osoba
{
private:
    string imie;
    string nazwisko;
    string katedra;

public:
    Wykladowca(string im, string nazw, string ka) : imie(im), nazwisko(nazw), katedra(ka) {}
    void wypisz()
    {
        cout << "Wykladowca:\n"
             << "Imie:\t\t" << imie
             << "\nNazwisko:\t" << nazwisko
             << "\nKatedra\t" << katedra;
    }
};
//========================================================================//
Osoba *grupa[] = {
    new Student("aaaaaa", "AAAAAAAAA", "Informatyka"),
    new Wykladowca("SSSSSSSS", "SSSSSSSS", "wydzial informatyki"),
    new Student("bbbbb", "BBBBBBBBB", "Informatyka"),
    // new Osoba("ooooooo", "ooooooo")
};

int main()
{
    for (int i = 0; i < 3; i++)
    {
        grupa[i]->wypisz();
        cout << endl;
    }

    // Osoba k1("aaa","bbb");
    return 0;
}