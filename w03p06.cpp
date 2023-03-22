#include <iostream>
#include <ctime>

using namespace std;

int x = 101;

class liczba
{
public:
    int x;
    liczba()
    {
        x = rand() % ::x;
        cout << "wylosowano: " << x
             << " z zakresu do " << ::x-1;
    }
};

int main()
{
    srand(time(NULL));
    liczba l_01;
    // cout << "x z obiektu: " << l_01.x << endl;
    // cout << "x globalny: " << x;
    return 0;
}