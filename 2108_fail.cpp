#include <iostream>
#include <math.h>
#include <algorithm>

using namespace std;

int main()
{
    int count;
    cin >> count;
    int arr[count];
    double mean = 0.0;
    int median;
    int mode;
    int interval;
    for (size_t i = 0; i < count; i++)
    {
        cin >> arr[i];
        mean += arr[i];
    }
    mean = mean / count;
    mean = round(mean);
    if (mean > -1 && mean <= 0)
    {
        mean = 0;
    }
    sort(arr, arr + count);

    median = arr[count / 2];
    if (count > 1)
    {
        mode = arr[0];
        for (size_t i = 0; i < count; i++)
        {
            if (mode < arr[i])
            {
                mode = arr[i];
                break;
            }
        }
        interval = arr[count - 1] - arr[0];
    }
    else
    {
        mode = arr[0];
        interval = 0;
    }

    cout << mean << endl;
    cout << median << endl;
    cout << mode << endl;
    cout << interval << endl;

    return 0;
}