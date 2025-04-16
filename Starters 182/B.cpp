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
        int n, k, d;
        cin >> n >> k >> d;

        vector<int> arr(n);
        for(int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }

        sort(arr.begin(), arr.end());

        int ans = 0;
        for(int i = 0; i < n-k; i++)
        {

            ans += ceil(1.0*d / arr[i]);
        }

        cout << ans << "\n";
    }






    return 0;
}
