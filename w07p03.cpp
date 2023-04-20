#include <iostream>

using namespace std;

class Test
{
private:
    int x;

public:
    Test(int px) : x(px)
    {
        cout << "\n konstruktor x=" << x << "\n";
    }
    void setX(int x) { this->x = x; }
    friend void odczytajX(Test &obiekt); // nagłowek funkcji zaprzyjaznionej
    friend void zamieX(int nx, Test &obiekt);
    ~Test()
    {
        cout << "\n destruktor x=" << x << "\n";
    }
};

void odczytajX(Test &obiekt)
{
    cout << obiekt.x;
}
void zamieX(int nx, Test &obiekt)
{
    obiekt.x = nx;
}

int main()
{
    Test ob_01(101);
    zamieX(200, ob_01);
    odczytajX(ob_01);
    return 0;
}