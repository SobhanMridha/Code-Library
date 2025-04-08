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

        sort(arr.begin(), arr.end());

        long long int cnt = 1, ans = 0;

        for(int i = 0; i < n; i++)
        {
            if(arr[i] == cnt && arr[i] >= cnt)
            {
                cnt++;
            }
            else
            {
                if(arr[i] > cnt)
                {
                    ans += arr[i] - cnt;
                    cnt++;

                }

            }
        }

        cout << ans << "\n";
    }





    return 0;
}
