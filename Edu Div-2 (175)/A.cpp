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

        long long cnt = 0;
        for(int i = 0; i <= n; i++)
        {
            if(i%3 == i%5)
            {
                cout << i << " ";
            }



        }

        cout << cnt << "\n";


    }





    return 0;
}
