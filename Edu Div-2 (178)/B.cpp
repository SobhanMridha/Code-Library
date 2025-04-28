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

         vector<long long> arr(n), suff(n, 0), mx(n, -1);
         for(int i = 0; i < n; i++)
         {
             cin >> arr[i];
             suff[i] = arr[i];
         }

         mx[0] = arr[0];
         for(int i = 1; i < n; i++)
         {
             mx[i] = max(mx[i-1], arr[i]);
         }


         for(int i = n-2; i >= 0; i--)
         {
             suff[i] += suff[i+1];
         }

         cout << mx[n-1];
         for(int i = n-2; i >= 0; i--)
         {
              cout << " " << mx[i]+suff[i+1];
         }

         cout << "\n";



    }





    return 0;
}
