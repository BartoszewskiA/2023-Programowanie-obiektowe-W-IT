#include <iostream>

using namespace std;

class Test
{
private:
    int x;
    char c;
    string s;

public:
    // Test(int pX, char pC, string pS)
    // {
    //     x = pX;
    //     c = pC;
    //     s = pS;
    // }
    Test(int x, char c, string s);
 
    // Test(int pX, char pC, string pS) : x(pX), c(pC), s(pS){}
};

Test::Test(int x, char c, string s)
{
    this->x = x;
    this->c = c;
    this->s = s;
}

    int main()
{

    return 0;
}