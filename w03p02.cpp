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
    liczba liczba_1(101);
    cout
        << liczba_1.getX();
    return 0;
}