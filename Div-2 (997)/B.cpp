#include<bits/stdc++.h>
using namespace std;

bool cmp (pair<int, int> &a, pair<int, int> &b)
{
    if(a.first < b.first)
    {
        return 1;
    }
    else if(a.first > b.first)
    {
        return 0;
    }
    else
    {
        if(a.second < b.second)
            return 0;
        else
            return 1;
    }
}

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

        string s[n];
        for(int i = 0; i < n; i++)
        {
            cin >> s[i];
        }

        vector<pair<int, int>> vec;

        for(int i = 0; i < n; i++)
        {
            int cnt = 0;
            for(int j = 0; j < s[i].size(); j++)
            {
                if(s[i][j] == '1')
                {
                    cnt++;

                }
            }

            vec.push_back({cnt, i+1});
        }

        sort(vec.begin(), vec.end(), cmp);



        for(auto val : vec)
            cout << val.second  << " ";

            cout << "\n";





    }

    return 0;
}
