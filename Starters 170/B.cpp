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

        vector<long long> arr(n);

        for(int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }

        sort(arr.begin(), arr.end());
        reverse(arr.begin(), arr.end());

        long long mx = arr[0];

        for(int i = 1; i < n; i++)
        {
            mx = max(mx, arr[i] + (i * x));
        }


        cout << mx << "\n";
    }





    return 0;
}
