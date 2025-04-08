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
        int x, y;
        cin >> x >> y;

        for(int i = 0; i < x/2; i++)
        {
            cout << "1";
        }
        for(int i = 0; i < y; i++)
        {
            cout << "2";
        }
        for(int i = 0; i < x/2; i++)
        {
            cout << "1";
        }

        cout << "\n";
    }

    return 0;
}
