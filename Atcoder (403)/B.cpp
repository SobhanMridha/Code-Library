#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);

    string t, u;
    cin >> t >> u;

    bool flag = false;
    for(int i = 0; i <= t.size()-u.size(); i++)
    {
        string x = t.substr(i, u.size());

        for(int j = 0; j < x.size(); j++)
        {
            if(x[j] == '?')
            {
                x[j] = u[j];
            }
        }

        if(x == u)
        {
            flag = true;
        }

//        cout << "x = " << x << "\n";
    }

    if(flag)
    {
        cout << "Yes\n";
    }
    else
    {
        cout << "No\n";
    }



    return 0;
}
