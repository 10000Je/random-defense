#include <iostream>
#include <string>
using namespace std;

int main()
{
    cin.tie(NULL);
    ios_base::sync_with_stdio(false);

    int N;
    cin >> N;

    for (int i = 0; i < N; i++)
    {
        string S;
        cin >> S;

        int k = S.length();
        if (S[k / 2 - 1] == S[k / 2])
            cout << "Do-it\n";
        else
            cout << "Do-it-Not\n";
    }
    return 0;
}