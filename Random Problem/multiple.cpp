#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);


    int a, b, c;
    cin >> a >> b >> c;

    int ans = -1;

    for(int i = a; i <= b; i++)
    {
        if(i % c == 0)
        {
            ans = i;
        }
    }

    cout << ans << "\n";







    return 0;
}

