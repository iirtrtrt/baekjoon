#include <iostream>
#include <map>

using namespace std;

int main()
{
    int count1;
    cin >> count1;
    int arr1[count1];
    for (size_t i = 0; i < count1; i++)
    {
        cin >> arr1[i];
    }

    int count2;
    cin >> count2;
    int arr2[count2];
    for (size_t i = 0; i < count2; i++)
    {
        cin >> count2;
    }

    int re[count2];
    for (size_t i = 0; i < count2; i++)
    {
        for (size_t j = 0; j < count1; j++)
        {
            /* code */
        }
    }
    map<int, int> m;
    m.insert(10, 10);
    auto i = m.begin();
    cout << i->first << " " << i->second << endl;

    return 0;
}