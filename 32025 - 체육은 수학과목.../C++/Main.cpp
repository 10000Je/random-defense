#include <iostream>

using namespace std;

int main()
{
    int H;
    cin >> H;

    int W;
    cin >> W;

    int R = (H < W) ? H : W;
    R *= 100;
    R /= 2;

    cout << R << '\n';
    return 0;
}