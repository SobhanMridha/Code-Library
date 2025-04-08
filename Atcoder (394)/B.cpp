#include<bits/stdc++.h>
using namespace std;

int main()
{
//    ios::sync_with_stdio(false);
//    cin.tie(0);

    int n;
    cin >> n;

    map<int, string> mp;

    for(int i = 0; i < n; i++)
    {
        string s;
        cin >> s;

        mp.insert({s.size(), s});
    }

    for(auto val : mp)
        cout << val.second;

    cout << "\n";







    return 0;
}
