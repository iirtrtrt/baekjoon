#include <iostream>

using namespace std;

int main()
{
    int count;
    cin >> count;

    int re = 0;
    for (size_t i = 1; i <= count; i++)
    {
        re += i;
    }

    cout << re << endl;

    return 0;
}