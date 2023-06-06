#include <iostream>

using namespace std;
//===========================================================================//
class Osoba
{
protected:
    string imie;
    string nazwisko;

public:
    Osoba(string im, string nazw) : imie(im), nazwisko(nazw) {}
    void virtual wypisz() = 0;
};
//===========================================================================//
class Student : public Osoba
{
private:
    string kierunek;

public:
    Student(string im, string nazw, string ki) : Osoba(im, nazw), kierunek(ki) {}
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
    string katedra;

public:
    Wykladowca(string im, string nazw, string ka) : Osoba(im, nazw), katedra(ka) {}
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

    //Osoba k1("aaa","bbb");
    return 0;
}