#include<bits/stdc++.h>
using namespace std;


int main()
{

    ios::sync_with_stdio(false);
    cin.tie(0);

    int test, cs = 1;
    cin >> test;

    while(test--)
    {
        int n, m;
        cin >> n >> m;
        string s;
        cin >> s;

        int arr[26] = {0}, ans = 0;

        for(int i = 0; i < s.size(); i++)
        {
            arr[s[i] - 'A']++;
        }

        for(int i = 0; i < 7; i++)
        {
            if(arr[i] < m)
            {
                ans += m - arr[i];
            }


        }

        cout << ans << "\n";




    }



    return 0;
}

