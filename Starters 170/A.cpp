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
        int n, x;
        cin >> n >> x;

        long long sum = 0;
        for(int i = 0; i < n; i++)
        {
            int num;
            cin >> num;
            sum += num;
        }

        if(sum % x == 0)
        {
            cout << sum / x << "\n";
        }
        else
        {
            cout << (sum / x) + 1 << "\n";
        }
    }






    return 0;
}
