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
        int n;
        cin >> n;

        string s, t;
        cin >> s >> t;

        int ind = n;
        for(int i = 0; i < n; i++)
        {
            if(s[i] == '1')
            {
                ind = i;
                break;
            }
        }

        bool flag = true;
        for(int i = 0; i <= ind; i++)
        {
            if(s[i] != t[i])
            {
                flag = false;
            }
        }

        if(flag)
        {
            vector<int> ans;
            for(int i = ind+1; i < n; i++)
            {
                if(s[i] == '0')
                    ans.push_back(i);
            }



            for(int i = n-1; i > ind; i--)
            {
                if(t[i] == '0')
                    ans.push_back(i);
            }

            cout << ans.size() << "\n";
            for(auto val : ans )
                cout << val << " ";

            cout << "\n";
        }
        else
        {
            cout << "-1\n";
        }




    }






    return 0;
}

