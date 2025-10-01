// 10000Je 만제

#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main()
{
    int t;
    cin >> t;

    for(int i=0; i<t; i++)
    {
        int R, C;
        cin >> R >> C;
        vector<string> box(R);

        for(int r=0; r<R; r++)
            cin >> box[r];

        int count = 0;
        for(int r=0; r<R-2; r++)
            for(int c=0; c<C; c++)
                if(box[r][c] == 'v' && box[r+1][c] == 'o' && box[r+2][c] == '^')
                    count++;
        
        for(int r=0; r<R; r++)
            for(int c=0; c<C-2; c++)
                if(box[r][c] == '>' && box[r][c+1] == 'o' && box[r][c+2] == '<')
                    count++;

        cout << count << '\n';
    }
    return 0;
}