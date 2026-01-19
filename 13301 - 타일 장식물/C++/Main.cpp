#include <iostream>

using namespace std;
typedef long long int64;

int64 dp[80];

int main()
{
    int N;
    cin >> N;

    dp[0] = 4;
    dp[1] = 6;

    for (int i = 2; i < N; i++)
    {
        dp[i] = dp[i - 1] + dp[i - 2];
    }

    cout << dp[N - 1] << '\n';
    return 0;
}