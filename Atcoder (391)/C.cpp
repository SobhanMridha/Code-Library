#include<bits/stdc++.h>
using namespace std;

long long check(int mid, map<long long, long long> &mp)
{
    map<long long, long long> m;

    for(auto val : mp)
    {
        m[val.second]++;
    }
    int cnt = 0;
    for(auto val : m)
    {
        if(val.second > 1)
            cnt++;
    }

    return (mid <= cnt);

}


int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);


    int n, q;
    cin >> n >> q;

    int freq[n+5] = {0};
    map<long long, long long> mp;
    for(int i = 1; i <= n; i++)
    {
        mp[i] = i;
        freq[i] = 1;

    }



    int ans = 0;
    while(q--)
    {
        int ck;
        cin >> ck;

        if(ck == 1)
        {
            int p, h;
            cin >> p >> h;
            int pos = mp[p];

            if(freq[pos] == 2)
            {
                ans--;

            }

            if(freq[h] == 1)
            {
                ans++;
            }
            freq[pos]--;
            freq[h]++;

            mp[p] = h;
        }
        else
        {
//            int L = 0, R = n / 2;
//            int ans = 0;
//            while(R >= L)
//            {
//                int mid =  L + (R - L) / 2;
////cout << mid << "\n";
//                if(check(mid, mp))
//                {
//                    L = mid + 1;
//                    ans = mid;
//                }
//                else
//                {
//                    R = mid-1;
//                }
//
//
//            }
//
            cout << ans << "\n";
        }
    }


    return 0;
}
