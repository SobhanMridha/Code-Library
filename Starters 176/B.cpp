#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);

    int test;
    cin >> test;

    while(test--)
    {
        int x, y, z, a, b, c;
        cin >> x >> y >> z >> a >> b >> c;

        int ans = min(z, c);
        ans += min(y, b);
        ans += min(x, a);
        a -= x;
        b -= y;
        c -= z;


        if(y > 0)
        {

        }
        if(z > 0)
        {

        }

    }








    return 0;
}
