#include <iostream>

using namespace std;

class Bazowa
{
public:
    string virtual przedstawSie() { return "Klasa bazowa\n"; }
};

class Pochodna : public Bazowa
{
public:
    string przedstawSie() { return "Klasa pochodna\n"; }
};

int main()
{
    Bazowa *k1 = new Bazowa;
    Bazowa *k2 = new Pochodna;
    cout << k1->przedstawSie();
    cout << k2->przedstawSie();
    delete k1;
    delete k2;
    return 0;
}