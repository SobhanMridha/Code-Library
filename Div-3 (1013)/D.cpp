#include<bits/stdc++.h>
using namespace std;

bool check(int mid, int n, int m, int k)
{
    long long student = m / (mid + 1);
    student *= mid;
    student += m % (mid + 1);

    student *= n;

//    cout << student << " " << k << "\n";

    return (student >= k);
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);

    int test;
    cin >> test;

    while(test--)
    {
        int n, m, k;
        cin >> n >> m >> k;

        int L = 1, R = m, ans = 0;

        while(R >= L)
        {
            int mid = L + (R - L) / 2;
//            cout << "mid : " << mid << " ";
            if(check(mid, n, m, k))
            {
                ans = mid;
                R = mid - 1;
            }
            else
            {
                L = mid + 1;
            }
        }

        cout << ans << "\n";
    }






    return 0;
}
