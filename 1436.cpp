#include <iostream>

using namespace std;

int main()
{
    int num;
    cin >> num;
    int cnt = 0;

    int st = 666;
    string s;
    bool found = false;
    while (1)
    {
        s = to_string(st);
        for (size_t i = 0; i < s.size() - 2; i++)
        {
            if (s[i] == '6' && s[i + 1] == '6' && s[i + 2] == '6')
            {
                cnt++;
                if (cnt == num)
                {
                    cout << st << endl;
                    found = true;
                    break;
                }
                break;
            }
        }
        if (found)
        {
            break;
        }
        st++;
    }

    return 0;
}