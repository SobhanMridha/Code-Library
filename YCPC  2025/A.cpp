#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);

    int n, k;
    cin >> n >> k;

    string s;
    cin >> s;

    map<char, int> mp;
    for(int i = 0; i < s.size(); i++)
    {
        mp[s[i]]++;
    }

    int oddCnt = 0;

    for(auto val : mp)
    {
        if(val.second % 2 != 0)
        {
            oddCnt++;
        }
    }

    if (oddCnt-1 <= k)
    {
        cout << "YES\n";
    }
    else
    {
        cout << "NO\n";
    }




    return 0;
}
