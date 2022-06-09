#include <iostream>

using namespace std;

int fibo(int n)
{
    if (n == 0)
    {
        return 0;
    }
    else if (n == 1)
    {
        return 1;
    }

    return fibo(n - 1) + fibo(n - 2);
}

int main()
{
    int num;
    cin >> num;
    cout << fibo(num) << endl;
    // int arr[num];
    // arr[0] = 1;
    // arr[1] = 1;
    // for (size_t i = 2; i < num; i++)
    // {
    //     arr[i] = arr[i - 2] + arr[i - 1];
    // }
    // cout << arr[num - 1] << endl;

    return 0;
}