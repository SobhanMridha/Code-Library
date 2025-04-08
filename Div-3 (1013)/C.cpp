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

        if(n % 2 == 0)
        {
            cout << "-1\n";
            continue;
        }

        vector<int> arr(n+1);
        int val = 1;
        for(int i = 2; i <= n; i+=2)
        {
            arr[i] = val;
            val++;
        }

        for(int i = 1; i <= n; i+=2)
        {
            arr[i] = val;
            val++;
        }

       for(int i = 1; i <= n; i++)
       {
           cout << arr[i] << " ";
       }

        cout << "\n";
    }






    return 0;
}
