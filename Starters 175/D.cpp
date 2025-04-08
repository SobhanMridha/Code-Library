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

        bool flag = true;
        for(int i = 1; i < s.size(); i++)
        {
            if(s[i-1] == s[i])
            {
                flag = false;
            }
        }

        if(flag)
        {
            cout << "0\n";
            continue;
        }



        int ones = 0, zeros = 0;
        for(int i = 0; i < s.size(); i++)
        {
            if(s[i] == '1')
            {
                ones++;
            }
            else
            {
                zeros++;
            }
        }

        int diff = abs(ones - zeros);

        if(diff == 0 || diff == 1)
        {
            cout << "1\n";
        }
        else if(diff <= 3)
        {

            cout << "2\n";

        }
        else
        {
            cout << "3\n";
        }









    }





    return 0;
}
