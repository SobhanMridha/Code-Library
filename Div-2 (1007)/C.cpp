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
        int n, st, en;
        cin >> n >> st >> en;

        vector<int> gp[n+5];
        for(int i = 0; i < n-1; i++)
        {
            int u, v;
            cin >> u >> v;
            gp[u].push_back(v);
        }


    }





    return 0;
}
