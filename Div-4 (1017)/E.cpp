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
        for(int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }

        vector<int> cnt(32, 0);

        for(int i = 0; i < n; i++)
        {
            for(int j = 0; j < 30; j++)
            {
                if(arr[i] & (1 << j))
                {
                    cnt[j]++;
                }
            }
        }

        long long sum = 0, ans = 0;
        for(int i = 0; i < n; i++)
        {
            for(int j = 0; j < 30; j++)
            {
                if(arr[i] & (1 << j))
                {
                    sum += (1LL*(n-cnt[j]) * (1 << j));
                }
                else
                {
                    sum += (1LL*cnt[j] * (1 << j));
                }

            }

              ans = max(ans, sum);
              sum = 0;
        }


           cout << ans << "\n";
    }





    return 0;
}
