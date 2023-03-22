#include <iostream>
#include <ctime>

using namespace std;

class liczba
{
private:
    int x;

public:
    liczba()
    {
        x = rand() % 101;
        cout << "Obiekt zostal utworzony";
    }
    int getX() { return x; }
    void setX(int px) { x = px; }
    ~liczba() { cout << "\nObiekt zpstal usuniety z pamieci"; }
};

int main()
{
    srand(time(NULL));
    liczba *a_01 = new liczba;
    delete a_01;
    return 0;
}