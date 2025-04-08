#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);

    string s;
    cin >> s;

    long long ans = 0;
    for(int i = 0; i < s.size(); i++)
    {
        for(int j = i+1; j < s.size(); j++)
        {
            for(int k = j+1; k < s.size(); k++)
            {
                if((j - i) == (k - j))
                {
                    if(s[i] == 'A' && s[j] == 'B' && s[k] == 'C')
                    {
                        ans++;
                    }
                }
            }
        }
    }

    cout << ans << "\n";

    return 0;
}
