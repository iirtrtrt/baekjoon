#include <iostream>

using namespace std;

int main()
{
    int hour;
    int min;
    int time;

    cin >> hour >> min >> time;

    int addHour = addHour = ((time % 60) + min) / 60;

    hour = hour + (time / 60) + addHour;
    min += time % 60;

    cout << hour % 24 << " " << min % 60 << endl;

    return 0;
}
