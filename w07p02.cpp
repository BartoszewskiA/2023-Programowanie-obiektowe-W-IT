#include <iostream>

using namespace std;

class Stale
{
private:
    static double PI;
    static double e;

public:
    static int getPI() { return PI; }
    static int getE() { return e; }
};
double Stale::PI = 3.1415;
double Stale::e = 2.71828;

int main()
{
    int r = 10;
    cout << "Pole kola: " << Stale::getPI() * r * r;
    return 0;
}