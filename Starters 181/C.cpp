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

        long long ans = 0, z = 0, o = 0;
        for(int i = 0; i < n; i++)
        {
            if(s[i] == '0')
                z++;
            else
                o++;

            if(z == o)
            {
                ans++;
            }
        }


        cout << (long long)pow(2, ans) << "\n";


    }






    return 0;
}
