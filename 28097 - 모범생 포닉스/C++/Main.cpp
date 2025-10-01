#include <iostream>
using namespace std;

int main()
{
    int N;
    cin >> N;

    int total_hour = 0;
    for (int i = 0; i < N; i++)
    {
        int T;
        cin >> T;
        total_hour += (T + 8);
    }
    total_hour -= 8;

    int total_day = total_hour / 24;
    total_hour %= 24;
    cout << total_day << ' ' << total_hour << '\n';
    return 0;
}