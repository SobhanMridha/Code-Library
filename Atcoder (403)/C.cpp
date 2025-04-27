#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);

    int n, m, q;
    cin >> n >> m >> q;

    vector<int> all(n+1, 0);
    set<int> st[n+1];

    while(q--)
    {
        int ck;
        cin >> ck;

        if(ck == 1)
        {
            int x, y;
            cin >> x >> y;

            st[x].insert(y);
        }
        else if(ck == 2)
        {
            int x;
            cin >> x;
            all[x] = 1;
        }
        else
        {
            int x, y;
            cin >> x >> y;

            if(all[x])
            {
                cout << "Yes\n";
                continue;
            }

            if(st[x].count(y))
            {
                cout << "Yes\n";
            }
            else
            {
                cout << "No\n";
            }
        }
    }



    return 0;
}
