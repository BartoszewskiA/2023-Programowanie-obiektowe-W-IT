#include <iostream>

using namespace std;

class Bazowa
{
public:
    int x;
    void wypiszX() { cout << "x z klasy bazowej =" << x << endl; }
};

class Pochodna : public Bazowa
{
public:
    int y;
    void wypiszX() { cout << "x z klasy pochodnej =" << x << endl; }
    void wypisz() { Bazowa::wypiszX();}
};
int main()
{
    Pochodna l2;
    l2.x = 101;
    l2.wypisz();
    return 0;
}