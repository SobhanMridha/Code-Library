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

        string s;
        cin >> s;

        long long ct1 = 0, ct2 = 0;
        for(int i = 0; i < n; i++)
        {
            if(s[i] == '-')
            {
                ct1++;
            }

            if(s[i] == '_')
            {
                ct2++;
            }
        }

        if(n < 3)
        {
            cout << "0\n";
            continue;
        }

        if(ct1 < 2 && ct2 < 1)
        {
            cout << "0\n";
            continue;
        }

        long long len1 = 0, len2 = 0;
        if(ct1 % 2 == 0)
        {
            len1 = ct1 / 2;
            len2 = ct1 / 2;
        }
        else
        {
            len1 = (ct1 / 2) + 1;
            len2 = ct1 / 2;
        }

        long long val = ct2 * len2;

        cout << val * len1 << "\n";

    }





    return 0;
}
