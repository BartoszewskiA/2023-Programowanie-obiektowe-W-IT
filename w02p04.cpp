#include <iostream>
#include <ctime>

using namespace std;

int main()
{
    time_t czas_systemowy = time(NULL);
    tm *czas = localtime(&czas_systemowy);
    cout << czas->tm_mday << "."
         << czas->tm_mon + 1 << "."
         << 1900 + czas->tm_year
         << "\t"
         << czas->tm_hour << ":"
         << czas->tm_min << ":"
         << czas->tm_sec;

    return 0;
}