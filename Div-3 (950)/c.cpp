#include<bits/stdc++.h>
using namespace std;
const int MOD = 1e9+7;

int main()
{

    ios::sync_with_stdio(false);
    cin.tie(0);

    int test, cs = 1;
    cin >> test;

    while(test--)
    {
        int n;
        cin >> n;

        vector<int> arrA(n), arrB(n);
        map<int, int> mp;
        for(int i = 0; i < n; i++)
        {
            cin >> arrA[i];
        }
        for(int i = 0; i < n; i++)
        {
            cin >> arrB[i];
            mp[arrB[i]]++;
        }

        int m;
        cin >> m;

        vector<int> arrM(m);
        map<int, int> mp2;
        for(int i = 0; i < m; i++)
        {
            cin >> arrM[i];
            mp2[arrM[i]]++;
        }

        auto it = mp.find(arrM[m-1]);

        if(it == mp.end())
        {
            cout << "NO\n";
            continue;
        }

        int flag = 1;
        for(int i = 0; i < n; i++)
        {
            if(arrA[i] != arrB[i])
            {
                auto it = mp2.find(arrB[i]);
                if(it != mp2.end())
                {
                    mp2[arrB[i]]--;
                    if(mp2[arrB[i]] == 0)
                        mp2.erase(arrB[i]);
                }
                else
                {
                    flag = 0;
                }
            }
        }

        if(flag)
        {
            cout << "YES\n";
        }
        else
        {
            cout << "NO\n";
        }



    }



    return 0;
}
