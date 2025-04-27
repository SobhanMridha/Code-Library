#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);

    int n;
    cin >> n;

    long long sum = 0;
    for(int i = 1; i <= n; i++)
    {
        int x;
        cin >> x;

        if(i % 2 != 0)
            sum += x;
    }

    cout << sum << "\n";




    return 0;
}
