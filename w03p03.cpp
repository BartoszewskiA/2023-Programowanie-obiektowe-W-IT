#include <iostream>
#include <ctime>

using namespace std;

class liczba
{
private:
    int x;

public:
    liczba(int px = -1) { x = px; }
    int getX() { return x; }
    void setX(int px) { x = px; }
};

int main()
{
    srand(time(NULL));

    liczba a01;
    liczba a02(1111);
    liczba tab[100];

    for (int i = 0; i < 100; i++)
        cout << tab[i].getX() << " ";
    return 0;
}