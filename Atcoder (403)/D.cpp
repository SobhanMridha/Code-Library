#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);


    int n, d;
    cin >> n >> d;

    vector<int> v(n);
    map<int, int> mp;

    for(int i = 0; i < n; i++)
    {
        cin >> v[i];
        mp[v[i]]++;
    }

    if (d == 0)
    {
        long long ans = 0;
        for (auto val : mp)
            ans += val.second - 1;

        cout << ans << "\n";

    }
    else
    {
        long long ans = 0;

        v.clear();
        for(auto val: mp)
            v.push_back(val.first);

        sort(v.begin(), v.end());

        for(int i = 0; i < v.size(); i++)
        {
            if (mp.find(v[i] + d) != mp.end())
            {
                int cnt = min(mp[v[i]], mp[v[i] + d]);
                ans += cnt;
                mp[v[i] + d] -= cnt;
            }
        }
        cout << ans << "\n";
    }




    return 0 ;
}
