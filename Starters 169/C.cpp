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
        int n, k;
        cin >> n >> k;

        vector<int> arr(n);
        map<long long, long long> mp;
        long long mx = -1;
        for(int i = 0; i < n; i++)
        {
            cin >> arr[i];
            mp[arr[i]]++;
            mx = max(mx, mp[arr[i]]);
        }

        if(mp[k] == mx)
        {
            cout << "0\n";
            continue;
        }

        bool flag = false;
        mp.clear();
        mx = -1;
        for(int i = 0; i < n; i++)
        {
            mp[arr[i]]++;
            mx = max(mx, mp[arr[i]]);
            if(mp[k] == mx)
            {
                flag = true;
                break;
            }
        }

        mp.clear();
        mx = -1;
        for(int i = n-1; i > 0; i--)
        {
            mp[arr[i]]++;
            mx = max(mx, mp[arr[i]]);
            if(mp[k] == mx)
            {
                flag = true;
                break;
            }
        }

        if(flag)
        {
            cout << "1\n";
        }
        else
        {
            cout << "2\n";
        }






    }


    return 0;
}

