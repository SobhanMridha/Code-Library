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
         int n;
         cin >> n;

         string s;
         cin >> s;

         int ans = 0, cnt = 0;
         for(int i = 0; i < n; i++)
         {
             if(s[i] == '1')
             {
                 cnt++;
             }
         }

         for(int i = 0; i < n; i++)
         {
             if(s[i] == '1')
             {
                 ans += cnt-1;
             }
             else
             {
                 ans += cnt+1;
             }
         }

         cout << ans << "\n";




    }






    return 0;
}
