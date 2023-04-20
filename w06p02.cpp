#include <iostream>

class Bazowa
{
private:
    int x;

public:
    Bazowa(int parametr) : x(parametr) {}
    int getX() { return x; }
};

class Pochodna : public Bazowa
{
    public:
    Pochodna(int parametr) : Bazowa(parametr) {}
};

using namespace std;

int main()
{
    // Bazowa x1(10);
    // cout << x1.getX();

    Pochodna x2(101);
    cout<< x2.getX();
    return 0;
}