#include <iostream>
#include <math.h>

using namespace std;

bool isPrime(int n)
{
    for (size_t i = 2; i < sqrt(2 * n); i++)
    {
        if (n % i == 0)
        {
            return false;
        }
    }
    return true;
}

int main()
{
    int count;
    cin >> count;

    for (size_t i = 0; i < count; i++)
    {
        int num;
        cin >> num;

        for (size_t j = num / 2; j < num; j++)
        {
            if (isPrime(num - j) && isPrime(j))
            {
                cout << num - j << " " << j << endl;
                break;
            }
        }
    }

    return 0;
}