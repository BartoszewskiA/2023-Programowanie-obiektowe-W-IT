#include <iostream>

using namespace std;

class liczba
{
public:
    int x;
    liczba() : x(0) {}
    liczba(int px) : x(px) {}
};

ostream &operator<<(ostream &str, liczba l)
{
    str << l.x;
    return str;
}

istream& operator>>(istream& str, liczba &l)
{
    str >> l.x;
    return str;
}

int main()
{
    liczba l1(101);
    cin >> l1;
    cout << l1;

    return 0;
}