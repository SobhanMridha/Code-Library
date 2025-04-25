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

        vector<int> arr(n);
        int mn = INT_MAX, mx = INT_MIN;
        for(int i = 0; i < n; i++)
        {
            cin >> arr[i];
            mn = min(mn, arr[i]);
            mx = max(mx, arr[i]);
        }

        if(mn == mx)
        {
            cout << "0\n";
        }
        else
        {
            int ans = 0;
            for(int i = 1; i <= mx; i++)
            {
                if(mn < i && i < mx)
                    ans++;


            }

            cout << ans << "\n";
        }





    }






    return 0;
}

