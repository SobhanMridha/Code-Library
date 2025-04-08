#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);


    string str = "ADVITIYA";
    int test;
    cin >> test;

    while(test--)
    {
        string s;
        cin >> s;

        int ans = 0;
        for(int i = 0; i < str.size(); i++)
        {
            if(str[i]  >= s[i])
                ans += (str[i] - 'A') - (s[i]  -'A');
            else
                ans += ((26 - (s[i] - 'A')) + (str[i] - 'A'));
        }

        cout << ans << "\n";
    }




    return 0;
}
