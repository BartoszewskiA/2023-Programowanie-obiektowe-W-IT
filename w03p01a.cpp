#include <iostream>
#include <ctime>

using namespace std;

class liczba
{
private:
    int x;

public:
    liczba() { x = rand() % 101; }
    int getX() { return x; }
    void setX(int px) { x = px; }
};

int main()
{
    srand(time(NULL));
    liczba tab[100];

    for (int i = 0; i < 100; i++)
        cout << tab[i].getX() << " ";
    return 0;
}