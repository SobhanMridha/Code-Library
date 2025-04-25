#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);

    int n, m;
    cin >> n >> m;

    int len = m;
    set<int> st[m];
    int i = 0;
    while(len--)
    {
        int sz;
        cin >> sz;

        while(sz--)
        {
            int val;
            cin >> val;
            st[i].insert(val);
        }
        i++;
    }

    int ans = 0;
    for(int i = 0; i < n; i++)
    {
        int x;
        cin >> x;

        for(int j = 0; j < m; j++)
        {
            if(st[j].count(x))
            {
                st[j].erase(x);
                if(st[j].empty())
                {
                    ans++;
                }
            }
        }

        cout << ans << "\n";
    }







    return 0;
}
