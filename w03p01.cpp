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
    liczba liczba_1;
    cout
        << liczba_1.getX();
    return 0;
}