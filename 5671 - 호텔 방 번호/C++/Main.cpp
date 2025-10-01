// Hash?

#include <iostream>
using namespace std;

int main()
{
    int n, m;
    while(cin >> n >> m)
    {
        int count = 0;
        for(int i=n; i<=m; i++)
        {
            int num = i;
            bool check[10] = {false};
            bool is_lucky = true;
            while(num > 0)
            {
                int r = num % 10;
                if(check[r] == true)
                {
                    is_lucky = false;
                    break;
                }
                check[r] = true;
                num /= 10;
            }
            if(is_lucky)
                count++;
        }
        cout << count << '\n';
    }
    return 0;
}