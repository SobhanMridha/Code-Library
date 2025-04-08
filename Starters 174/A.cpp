#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);

    int x, y;
    cin >> x >> y;


    y *= 10;

    if(x+y >= 100)
    {
        cout << "Yes\n";
    }
    else
    {
        cout << "No\n";
    }



    return 0;
}
