#include <iostream>

using namespace std;

class Test
{
public:
    int x;
    static int dana_wspolna; // delkaracja pola statyczngo
};

int Test::dana_wspolna = 100; // definicja pola statycznego

int main()
{
    Test::dana_wspolna = 101;
    cout << Test::dana_wspolna;
    return 0;
}