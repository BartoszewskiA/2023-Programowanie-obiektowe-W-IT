#include <iostream>

using namespace std;

class wektor
{
private:
    double x;
    double y;

public:
    wektor(double px = 0, double py = 0) : x(px), y(py) {}

    wektor operator+(wektor w2)
    {
        wektor wynik(this->x + w2.x, this->y + w2.y);
        // wektor wynik(x + w2.x, y + w2.y);
        return wynik;
    }

    wektor operator-(wektor w2)
    {
        wektor wynik(x - w2.x, y - w2.y);
        return wynik;
    }

    wektor operator*(double s)
    {
        wektor wynik(s * x, s * y);
        return wynik;
    }

    // wektor operator*(double s, wektor w)
    // {
    //     wektor wynik(s * w.x, s * w.y);
    //     return wynik;
    // }

    friend wektor operator*(double s, wektor w);

    void operator+=(wektor p)
    {
        x = x + p.x;
        y = y + p.y;
    }

    void operator*=(double p)
    {
        x = p * x;
        y = p * y;
    }
    friend ostream &operator<<(ostream &strumien, wektor w);
    friend istream &operator>>(istream &strumien, wektor w);
};

wektor operator*(double s, wektor w)
{
    wektor wynik(s * w.x, s * w.y);
    return wynik;
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