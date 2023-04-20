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
private:
    int y;

public:
    Pochodna(int parametrX, int parametrY) : Bazowa(parametrX), y(parametrY) {}
    int getY() { return y; }
};

using namespace std;

int main()
{
    // Bazowa x1(10);
    // cout << x1.getX();

    Pochodna x2(101, 201);
    cout << x2.getX() << endl
         << x2.getY();
    return 0;
}