#include <iostream>

using namespace std;

int main()
{
    int num;
    cin >> num;

    int div = 2;
    while (num != 1)
    {
        if (num % div == 0)
        {
            num = num / div;
            cout << div << endl;
        }
        else
        {
            div++;
        }
    }

    return 0;
}