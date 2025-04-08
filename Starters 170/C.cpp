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

        vector<long long> arr(n);
        for(int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }

        string s = "";

        for(int i = 1; i < n; i++)
        {
            if(arr[i-1] < arr[i])
            {
                s += '<';
            }
            else
            {
                s += '>';
            }
        }

        for(int i = 0; i < s.size(); i++)
        {
            if(i == s.size() - 1)
                break;

            if(s[i] == '>' && s[i+1] == '<')
            {
                s[i] = '<';
            }
        }

        long long ans = 1, cnt = 0;

        for(int i = 0; i < s.size(); i++)
        {
            if(s[i] == '<')
            {
                cnt++;
            }
            else
            {
                ans = max(ans, cnt);
                cnt = 0;
            }
        }

        cout << max(ans, cnt) << "\n";



    }




    return 0;
}

