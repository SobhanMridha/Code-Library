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

        int zeros = 0;
        vector<int> arr(n);
        map<int, int> mp;
        for(int i = 0; i < n; i++)
        {
            cin >> arr[i];
            mp[arr[i]]++;

            if(arr[i] == 0)
                zeros++;

        }

        int ans = 0, ck = 0;
        for(auto val : mp)
        {
            if(val.first == 0)
                continue;

            if(val.second == 1)
            {
                ans++;
            }
            else
            {
                if(val.second % 2 == 0)
                {
                    zeros++;
                    continue;
                }
                else
                {
                    zeros++;
                    ans++;
                }
            }

        }

        if(zeros)
        {
            cout << ans + 1 << "\n";
        }
        else
        {
            cout << ans << "\n";
        }






    }





    return 0;
}
