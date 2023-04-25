#include <iostream>

using namespace std;

class test
{
private:
    int x;

public:
    int getX() { return x; }

    test() : x(0) { cout << "domyslny\n"; }
    test(int X) : x(X) { cout << "z parametrem\n"; }
    test(const test &obj)
    {
        x = obj.x;
        cout << "kopiujacy\n";
    }
};

int main()
{
    test wzorzec(101);
    // test kopia(wzorzec);
    test kopia;
    kopia = wzorzec;
    cout << "wzorzec: " << wzorzec.getX() << endl;
    cout << "kopia: " << kopia.getX() << endl;
    return 0;
}