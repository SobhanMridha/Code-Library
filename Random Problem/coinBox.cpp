#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);


    int a, b;
    cin >> a >> b;

    int ans = a + b;

    ans = max(ans, a + (a - 1));
    ans = max(ans, b + (b - 1));


    cout << ans << "\n";




    return 0;
}
