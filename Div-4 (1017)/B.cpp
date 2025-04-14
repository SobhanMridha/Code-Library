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
        int n, m, l, r;
        cin >> n >> m >> l >> r;

        if(m >= r)
        {
            cout << r-m << " " << r << "\n";

        }
        else
        {
            cout << "0 " << m << "\n";
        }


    }




    return 0;
}
