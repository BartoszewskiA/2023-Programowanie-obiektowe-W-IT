#include <iostream>
#include <ctime>

using namespace std;

class liczba
{
private:
    int x;

public:
    liczba(int px) { x = px; }
    int getX() { return x; }
    void setX(int px) { x = px; }
};

int main()
{
    srand(time(NULL));
    liczba *tab[100];
    for (int i = 0; i < 100; i++)
    {
        tab[i] = new liczba(i);
    }

    for (int i = 0; i < 100; i++)
        cout << tab[i]->getX() << " ";
    for (int i = 0; i < 100; i++)
        delete tab[i];
    return 0;
}