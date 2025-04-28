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

        if(s[0] == s[n-1])
        {
            if(s[0] == 'A')
            {
                cout << "Alice\n";
            }
            else
            {
                cout << "Bob\n";
            }
        }
        else
        {
            vector<int> a, b;
            for(int i = 0; i < n; i++)
            {
                if(s[i] == 'A')
                {
                    a.push_back(i+1);
                }
                else
                {
                    b.push_back(i+1);
                }
            }

            sort(a.begin(), a.end());
            sort(b.begin(), b.end());

            if(a[0] == 1)
            {
                bool flag = false;
                for(int i = 0; i < b.size()-1; i++)
                {
                    if(b[i] > a[0])
                        flag = true;
                }

                if(flag)
                {
                    cout << "Bob\n";

                }
                else
                {
                    cout << "Alice\n";
                }
            }
            else
            {
                bool flag = true;
                int len = a.size()-2;
                if(len < 0)
                {
                    cout << "Bob\n";
                    continue;
                }
                long long val = a[len];
                for(int i = 0; i < b.size(); i++)
                {
                    if(val < b[i])
                        flag = false;
                }

                if(flag)
                {
                    cout << "Alice\n";
                }
                else
                {
                    cout << "Bob\n";
                }
            }
        }


    }





    return 0;
}
