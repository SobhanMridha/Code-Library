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

        if(n == 1 || n == 3)
        {
           cout << "1\n";
           continue;
        }

        int l = 2, r = 5, ans = 1;
        while(1)
        {
            if(n == l || n == r)
            {
                break;
            }
            ans++;
            l += 2;
            r += 2;
        }

        cout << ans + 1 << "\n";
    }





    return 0;
}
