#include <iostream>
#include <math.h>

using namespace std;

void hanoi(int num, int sta, int via, int end)
{
    if (num == 1)
    {
        cout << sta << " " << end << endl;
    }
    else
    {
        hanoi(num - 1, sta, end, via);
        cout << sta << " " << end << endl;
        hanoi(num - 1, via, sta, end);
    }
}

int main()
{
    int num;
    cin >> num;
    cout << (int)pow(2, num) - 1 << endl;
    hanoi(num, 1, 2, 3);
}