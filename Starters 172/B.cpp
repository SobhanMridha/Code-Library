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
        int  n, x;
        cin >> n >> x;

        vector<long long> arr(n);
        for(int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }

        long long ans = 1, cnt = 1, ck = 1;
        for(int i = 1; i < n; i++)
        {
            if(arr[i-1] <= arr[i])
            {
                cnt++;
            }
            else
            {
                if((arr[i-1] <= (1LL * arr[i] * x)) && ck)
                {
                    cnt++;
                    ck = 0;
                    arr[i] = arr[i] * x;
                }
                else
                {
                    ans = max(ans, cnt);
                    ck = 1;
                    cnt = 1;
                }

            }
        }

        cout << max(ans, cnt) << "\n";
    }


    return 0;
}
