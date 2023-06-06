#include <iostream>

using namespace std;

class wektor
{
public:
    double x;
    double y;
    wektor(double px = 0, double py = 0) : x(px), y(py) {}
};

wektor dodaj(wektor w1, wektor w2)
{
    wektor wynik(w1.x + w2.x, w1.y + w2.y);
    return wynik;
}

wektor operator+(wektor w1, wektor w2)
{
    wektor wynik(w1.x + w2.x, w1.y + w2.y);
    return wynik;
}

wektor operator-(wektor w1, wektor w2)
{
    wektor wynik(w1.x - w2.x, w1.y - w2.y);
    return wynik;
}

wektor operator*(double s, wektor w)
{
    wektor wynik(s * w.x, s * w.y);
    return wynik;
}

wektor operator*(wektor w, double s)
{
    wektor wynik(s * w.x, s * w.y);
    return wynik;
}

void operator+=(wektor &l, wektor p)
{
    l.x = l.x + p.x;
    l.y = l.y + p.y;
}

void operator*=(wektor &l, double p)
{
    l.x = p * l.x;
    l.y = p * l.y;
}

ostream &operator<<(ostream &strumien, wektor w)
{
    strumien << "[" << w.x << ";" << w.y << "]";
    return strumien;
}

int main()
{
    wektor w1(10, 30), w2(40, -5);
    // wektor wynik(w1.x + w2.x, w1.y + w2.y);
    // wektor wynik = dodaj(w1, w2);
    // wektor wynik = w2 + w1;
    // wektor wynik = 2 * w1;
    // wektor wynik_2 = w1 * 3;
    // w2 += w1;
    // double x = 5;
    // w2 *= x;
    cout << w2 << " " << w1;
    // cout << "[" << w2.x << "," << w2.y << "]";
    return 0;
}