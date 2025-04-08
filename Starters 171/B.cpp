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
        int m, k;
        cin >> m >> k;

        string s;
        cin >> s;

        for(int i = 0; i < s.size(); i++)
        {
            if(s[i] == 'S')
            {
                k--;
            }
        }

        if(k <= 0)
        {
            cout << m << "\n";
        }
        else
        {
            cout  << m + (k - 1) << "\n";
        }

    }




    return 0;
}
