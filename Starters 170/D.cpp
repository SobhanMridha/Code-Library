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

        unsigned long long sum = 0;
        vector<long long> arr(n);
        for(int i = 0; i < n; i++)
        {
            cin >> arr[i];
            sum += arr[i];
        }

        unsigned long long ans = n * n;

        if(ans > sum)
            cout << ans << "\n";
        else
            cout << sum << "\n";




    }




    return 0;
}

