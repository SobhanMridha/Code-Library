#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);

    long long n;
    cin >> n;

    long long prod = 1;
    for(int i = 1; i <= 3*10^18; i++)
    {
        prod *= i;

        if(prod == n)
        {
            cout << i << "\n";
            break;
        }
    }


    return 0;
}
