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

        int B = 0, G = 0;
        for(int i = 0; i < n; i++)
        {
            if(s[i] == 'G')
                G++;
            else
                B++;

            if(2*G < B)
                break;
        }

        cout << G + B << "\n";

    }






    return 0;
}
