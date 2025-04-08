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

         bool flag = false;
         int ans = -1;
         map<int, int> freq;
         vector<int> arr(n);
         for(int i = 0; i < n; i++)
         {
             cin >> arr[i];
             freq[arr[i]]++;
             if(freq[arr[i]] > 1)
             {
                flag = true;
                ans = arr[i];
             }
         }

         if(flag)
         {
             cout << "1\n";
             cout << ans << "\n";
         }
         else
         {
             cout << ans << "\n";
         }


    }

    return 0;
}
