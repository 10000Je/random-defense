// 10000Je 만제

#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    cin.tie(NULL);
    ios_base::sync_with_stdio(false);

    int n;
    cin >> n;

    bool area[500][500] = {false};
    for(int i=0; i<n; i++)
    {
        int x1, y1, x2, y2;
        cin >> x1 >> y1 >> x2 >> y2;
        for(int x=x1; x<x2; x++) 
            for(int y=y1; y<y2; y++) 
                area[x][y] = true;
    }

    int total = 0;
    for(int x=0; x<500; x++)
        for(int y=0; y<500; y++)
            if(area[x][y])
                total++;

    cout << total << '\n';
    return 0;
}