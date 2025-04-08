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

        int a, b, c, d;
        cin >> a >> b >> c >> d;

        if(a > b)
        {
            swap(a, b);
        }

        if(c > d)
        {
            swap(c, d);
        }


        if(((a < c && b > c) && (a > d && b > d)) || ((a < d && b > d) && (a > c && b > c)))
        {
            cout << "YES\n";
        }
        else if(((c < a && d > a) && (c > b && d > b)) || ((c < b && d > b) && (c > a && d > a)))
        {
            cout << "YES\n";
        }
        else
        {
            cout << "NO\n";
        }



    }


    return 0;
}
