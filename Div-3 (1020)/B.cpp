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
        long long n, x;
        cin >> n >> x;

        for(int i = 0; i < x; i++)
        {
            cout << i << " ";
        }

        for(int i = x+1; i < n; i++)
        {
            cout << i << " ";
        }


        if(n != x)
            cout << x << "\n";
        else
            cout << "\n";


    }






    return 0;
}
