// 남은 플레이어중 최솟값이, 현재 준원이보다 크다면 불가능 -> No
// 무사히 전부다 죽이면 가능 -> Yes

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;
typedef long long int64;

int main()
{
    cin.tie(NULL);
    ios_base::sync_with_stdio(false);

    int N;
    cin >> N;

    int64 A;
    cin >> A;

    vector<int> arr(N - 1);
    for (int i = 0; i < N - 1; i++)
    {
        cin >> arr[i];
    }
    sort(arr.begin(), arr.end());

    for (int i = 0; i < N - 1; i++)
    {
        if (arr[i] >= A)
        {
            cout << "No\n";
            return 0;
        }
        A += arr[i];
    }
    cout << "Yes\n"; // 성공
    return 0;
}