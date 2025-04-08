#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);

    int n;
    cin >> n;

    vector<int> p(n), q(n);
    map<int, int> mp1, mp2;

    for(int i = 0; i < n; i++)
    {
        cin >> p[i];
    }

    for(int i = 0; i < n; i++)
    {
        cin >> q[i];
    }

    for(int i = 0; i < n; i++)
    {
        mp1[q[i]] = p[i];
    }

    for(int i = 0; i < n; i++)
    {
        mp2[i+1] = q[i];
    }

    for(int i = 1; i <= n; i++)
    {
        int person = mp1[i];
        cout << mp2[person] << " ";
    }



    return 0;
}
