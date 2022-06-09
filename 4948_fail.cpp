#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    int arr[2 * 123456] = {};
    for (size_t i = 1; i <= 123456; i++)
    {
        bool prime = true;
        for (size_t j = 2; j < sqrt(2 * i) + 1; j++)
        {
            if (i % j == 0)
            {
                prime = false;
                break;
            }
        }

        if (prime)
        {
            arr[i] = 1;
        }
    }

    int num;
    cin >> num;
    while (num != 0)
    {
        if (num == 1)
        {
            cout << 1 << endl;
        }
        else
        {
            int cnt = 0;
            for (size_t i = num + 1; i < 2 * num; i++)
            {
                if (arr[i] == 1)
                {
                    cnt++;
                }
            }
            cout << cnt << endl;
        }

        cin >> num;
    }

    // int num;
    // cin >> num;
    // while (num != 0)
    // {
    //     if (num == 1)
    //     {
    //         cout << 1 << endl;
    //     }
    //     else
    //     {
    //         int cnt = 0;
    //         for (size_t i = num + 1; i <= 2 * num; i++)
    //         {
    //             bool ch = false;
    //             for (size_t j = 2; j < sqrt(2 * i); j++)
    //             {
    //                 if (i % j == 0)
    //                 {
    //                     ch = false;
    //                     break;
    //                 }
    //                 else
    //                 {
    //                     ch = true;
    //                 }
    //             }

    //             if (ch)
    //             {
    //                 cnt++;
    //             }
    //         }
    //         cout << cnt << endl;
    //     }

    //     cin >> num;
    // }

    return 0;
}