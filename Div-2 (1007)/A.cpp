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
         long long n;
         cin >> n;

         if(n % 3 == 1)
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
