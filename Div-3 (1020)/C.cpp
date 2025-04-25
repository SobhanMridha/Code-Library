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
        int n, k;
        cin >> n >> k;

        long long mn = INT_MAX, mx = INT_MIN;
        vector<long long> a(n), b(n);
        for(int i = 0; i < n; i++)
        {
            cin >> a[i];
            mn = min(mn, a[i]);
            mx = max(mx, a[i]);

        }

        int cnt = 0;
        for(int i = 0; i < n; i++)
        {
            cin >> b[i];
            if(b[i] == -1)
                cnt++;
        }



        if(cnt == n)
        {
            mn += k;

            if(mn < mx)
            {
                cout << "0\n";
            }
            else
                cout << (mn - mx) + 1 << "\n";
        }
        else
        {
            vector<int> ans;
            for(int i = 0; i < n; i++)
            {
                if(b[i] != -1)
                {
                    ans.push_back(a[i]+b[i]);
                }
            }

            bool flag = true;

            for(int i = 1; i < ans.size(); i++)
            {
                if(ans[i-1] != ans[i])
                    flag = false;
            }

            for(int i = 0; i < n; i++)
            {
                if(a[i] > ans[0])
                    flag = false;
                if(mn+k < ans[0])
                    flag = false;
            }

            if(flag)
            {
                cout << "1\n";
            }
            else
            {
                cout << "0\n";
            }

        }


    }






    return 0;
}
