// 10000Je 만제

#include <iostream>
#include <algorithm>
#include <set>
#include <string>
using namespace std;

int main()
{
    string dad_body, dad_tail;
    string mom_body, mom_tail;

    cin >> dad_body >> dad_tail;
    cin >> mom_body >> mom_tail;

    set<string> colors = {dad_body, dad_tail, mom_body, mom_tail};

    for (string head : colors)
        for (string tail : colors)
            cout << head << ' ' << tail << '\n';

    return 0;
}