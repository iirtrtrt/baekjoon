#include <iostream>

using namespace std;

int main()
{
    int a;
    int b;
    int c;

    cin >> a >> b >> c;

    int re;

    if (a == b && a == c)
    {
        re = 10000 + (a * 1000);
    }
    else if (a != b && a != c && b != c)
    {
        for (int i = 6; i > 0; i--)
        {
            if (a == i)
            {
                re = a * 100;
                break;
            }
            else if (b == i)
            {
                re = b * 100;
                break;
            }
            else if (c == i)
            {
                re = c * 100;
                break;
            }
        }
    }
    else
    {
        if (a == b)
        {
            re = 1000 + (a * 100);
        }
        else if (b == c)
        {
            re = 1000 + (b * 100);
        }
        else if (c == a)
        {
            re = 1000 + (c * 100);
        }
    }

    cout << re << endl;

    return 0;
}
