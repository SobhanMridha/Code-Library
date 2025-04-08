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
           long long n, k, p;
           cin >> n >> k >> p;

           k = abs(k);
           long long x = ceil((k*1.0 / p));

           if(n >= x)
           {
               cout << x << "\n";
           }
           else
           {
               cout << "-1\n";
           }
    }





    return 0;
}
