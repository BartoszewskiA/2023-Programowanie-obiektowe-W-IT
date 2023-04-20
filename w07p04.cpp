#include <iostream>

using namespace std;

class A; // nagłowki klas
class B; // deklaracke klas

class A
{
private:
    int danaA;

public:
    A(int a) : danaA(a) {}
    friend void porownaj(A &obA, B &obB);
    friend void porownaj(B &obB, A &obA);
};

class B
{
private:
    int danaB;

public:
    B(int b) : danaB(b) {}
    friend void porownaj(A &obA, B &obB);
    friend void porownaj(B &obB, A &obA);
};

void porownaj(A &obA, B &obB)
{
    if (obA.danaA == obB.danaB)
        cout << "A=B";
    else if (obA.danaA > obB.danaB)
        cout << "A>B";
    else
        cout << "B>A";
}

void porownaj(B &obB, A &obA)
{
    if (obA.danaA == obB.danaB)
        cout << "A=B";
    else if (obA.danaA > obB.danaB)
        cout << "A>B";
    else
        cout << "B>A";
}

int main()
{
    A a1(10);
    B b1(20);
    porownaj(b1, a1);
    return 0;
}