#include <iostream>

using namespace std;

struct osoba
{
    string imie;
    string nazwisko;
};

int main()
{
    osoba tab[4];
    for (int i = 0; i < 4; i++)
    {
        cout << "Imie: ";
        cin >> tab[i].imie;
        cout << "Nazwisko: ";
        cin >> tab[i].nazwisko;
    }
    for (int i = 0; i < 4; i++)
        cout << i + 1 << ": "
             << tab[i].imie << " "
             << tab[i].nazwisko 
             << endl;
    return 0;
}