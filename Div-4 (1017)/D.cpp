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
        string s1, s2;
        cin >> s1 >> s2;

        vector<pair<char, int>> arr, arr2;

        int i = 0;

        while(i < s1.size())
        {
            int j = i+1, cnt = 1;
            while(j < s1.size() && s1[i] == s1[j])
            {
                j++;
                cnt++;
            }

            arr.push_back({s1[i], cnt});
            cnt = 0;
            i = j;
        }

        i = 0;
        while(i < s2.size())
        {
            int j = i+1, cnt = 1;
            while(j < s2.size() && s2[i] == s2[j])
            {
                j++;
                cnt++;
            }
            arr2.push_back({s2[i], cnt});
            cnt = 0;
            i = j;
        }

        bool flag = true;

        if(arr.size() != arr2.size())
        {
            cout << "NO\n";
            continue;
        }

        for(int i = 0; i < arr.size(); i++)
        {
            long long need = arr[i].second;
            long long val = arr2[i].second;

            if(need <= val && val <= 2*need && arr[i].first == arr2[i].first)
            {
                continue;
            }
            else
            {
                flag = false;
                break;
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
