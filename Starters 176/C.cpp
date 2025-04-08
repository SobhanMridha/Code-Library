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
        int n, c;
        cin >> n >> c;

        string s;
        cin >> s;

        map<char, int> mp;
        for(int i = 0; i < n; i++)
        {
            mp[s[i]]++;
        }

        long long ans = 0, cnt = 0;
        for(auto val : mp)
        {
            long long v = val.second;
            v += cnt;
            long long cost = ((v*(v+1)) / 2) - ((cnt*(cnt+1)) / 2);

            if(c > cost)
            {
                ans += cost;
                cnt = v;
            }
            else if(cost > c)
            {
                ans += c;
            }
            else
            {
                ans += c;
            }



        }

        cout << ans << "\n";
    }






    return 0;
}
