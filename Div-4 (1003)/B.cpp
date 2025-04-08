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

        int ans = 0, cnt = 0;

        for(int i = 1; i < s.size(); i++)
        {
               if(s[i-1] == s[i])
                    cnt++;
        }

        if(cnt)
        {
            cout << "1\n";
        }
        else
        {
            cout << s.size() << "\n";
        }




    }

    return 0;
}
