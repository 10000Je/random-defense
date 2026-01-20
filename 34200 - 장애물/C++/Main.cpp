// if i is block -> dp[i] = INF
// else -> dp[i] = MIN(dp[i-1] + 1, dp[i-2] + 1)

#include <iostream>
#define INF 100000000
#define MIN(a, b) (a < b) ? a : b

using namespace std;

int dp[250002] = {0};
int w[250002] = {0};

int main()
{
    cin.tie(NULL);
    ios_base::sync_with_stdio(false);
    int N;
    cin >> N;

    int T;
    for (int i = 0; i < N; i++)
    {
        cin >> T;
        w[T] = -1; // WALL
    }

    dp[1] = (w[1] == -1) ? INF : 1;
    for (int i = 2; i <= T + 1; i++)
    {
        if (w[i] == -1)
        {
            dp[i] = INF;
            continue;
        }
        dp[i] = MIN(dp[i - 1] + 1, dp[i - 2] + 1);
    }

    if (dp[T + 1] >= INF)
        cout << -1 << '\n';
    else
        cout << dp[T + 1] << '\n';

    return 0;
}