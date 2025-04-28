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
        long long a, b, c;
        cin >> a >> b >> c;

        long long x = (a + b + c) / 3;
        long long val = c - x;

        if(a > x || b > x || (a + b + c) % 3 != 0)
        {
            cout << "NO\n";
            continue;
        }

        val -= (x - a);
        val -= (x - b);
        if(val >= 0)
        {
            cout << "YES\n";
        }
        else
        {
            cout <<"NO\n";
        }


    }




    return 0;
}
