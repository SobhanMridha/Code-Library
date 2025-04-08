#include<bits/stdc++.h>
using namespace std;

int main()
{

    int test;
    cin >> test;

    while(test--)
    {
        int n;
        cin >> n;
        string s;
        cin >> s;
        for(int i = 0; i < s.size(); i++)
        {
            if(s[i] == '1')
            {
                cout <<"0";
            }
            else
            {
                cout << "1";
            }
        }

        cout << "\n";
    }


    return 0;
}
