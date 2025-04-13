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
        long long x, k;
        cin >> x >> k;

        bool flag = true;


        for(long long i = 2; i*i <= x; i++)
        {
               if(x % i == 0)
               {
                   flag = false;
               }

        }

        if(flag && k == 1 && x != 1)
        {
            cout << "YES\n";
        }
        else if(x == 1 && k == 2)
        {
            cout << "YES\n";
        }
        else
        {
            cout << "NO\n";
        }


    }







    return 0;
}
