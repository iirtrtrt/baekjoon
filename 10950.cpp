#include <iostream>

using namespace std;

int main()
{
    int count;
    cin >> count;

    int arr[count][2];

    for (int i = 0; i < count; i++)
    {
        cin >> arr[i][0] >> arr[i][1];
    }

    for (int i = 0; i < count; i++)
    {
        cout << arr[i][0] + arr[i][1] << endl;
    }

    return 0;
}