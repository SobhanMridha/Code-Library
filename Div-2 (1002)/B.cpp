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

        vector<int> arr(n);
        int ck = (n == k), cnt = 1;

        for(int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }

        if(ck)
        {

            for(int i = 1; i < n; i+=2)
            {
                if(arr[i] == cnt)
                {
                    cnt++;
                }
                else
                {
                    break;
                }
            }

            cout << cnt << "\n";
            continue;
        }


    }


    return 0;
}
