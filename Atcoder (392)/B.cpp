#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);

     int n, m;
     cin >> n >> m;

     vector<int> arr(m);
     for(int i = 0; i < m; i++)
        cin >> arr[i];

     sort(arr.begin(), arr.end());

     vector<int> ans;
     int ind = 0;
     for(int i = 1; i <= n; i++)
     {
         if(arr[ind] == i)
         {
             ind++;
         }
         else
         {
             ans.push_back(i);
         }
     }

     cout << ans.size() << "\n";
     for(auto val : ans)
        cout << val << " ";

     cout << "\n";


    return 0;
}
