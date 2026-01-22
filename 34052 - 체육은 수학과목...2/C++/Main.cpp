#include <iostream>

using namespace std;

int main()
{
    int t1, t2, t3, t4;
    cin >> t1 >> t2 >> t3 >> t4;

    int left = 1800 - t1 - t2 - t3 - t4;

    if (left >= 300)
        cout << "Yes" << '\n';
    else
        cout << "No" << '\n';

    return 0;
}