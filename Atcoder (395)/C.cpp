#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);

    int n;
    cin >> n;

    vector<int> arr(n);
    for(int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    map<int, int> mp;

    int mn = INT_MAX;
    for(int i = 0; i < n; i++)
    {
        if(mp.count(arr[i]))
        {
            int len1 = mp[arr[i]];
            mn = min(mn, ((i+1) - len1)+1);
            mp[arr[i]] = i+1;
        }
        else
        {
            mp.insert({arr[i], i+1});
        }

    }

    if(mn == INT_MAX)
    {
        cout << "-1\n";
    }
    else
    cout << mn << "\n";


    return 0;
}
