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
        long long n, x;
        cin >> n >> x;

        vector<int> arr(n);
        for(int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }

        sort(arr.begin(), arr.end());

        long long len = 0, ans = 0;

        for(int i = n-1; i >= 0; i--)
        {
            long long val = arr[i];
            len++;

            if((len * val) >= x)
            {
                ans++;
                len = 0;
            }
        }

        cout << ans << "\n";

    }





    return 0;
}
