#include <iostream>

using namespace std;

int main()
{
    int flats[15][15] = {0};
    for (size_t i = 0; i < 15; i++)
    {
        for (size_t j = 1; j < 15; j++)
        {
            if (i == 0)
            {
                flats[i][j] = j;
            }
            else
            {
                for (size_t l = 1; l <= j; l++)
                {
                    flats[i][j] += flats[i - 1][l];
                }
            }
        }
    }

    int count;
    cin >> count;

    int arr[count][2];
    for (size_t i = 0; i < count; i++)
    {
        cin >> arr[i][0] >> arr[i][1];
    }

    for (size_t i = 0; i < count; i++)
    {
        cout << flats[arr[i][0]][arr[i][1]] << endl;
    }

    return 0;
}