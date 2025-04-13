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
        string s;
        cin >> s;

        long long cnt = 0, ind = -1;
        for(int i = s.size()-1; i >= 0; i--)
        {
            if(s[i] != '0')
            {
                ind = i;
                break;
            }
            else
            {
                cnt++;
            }
        }

        for(int i = 0; i < ind; i++)
        {
            if(s[i] == '0')
            {
                continue;
            }
            else
            {
                cnt++;
            }
        }

        cout << cnt << "\n";


    }







    return 0;
}
