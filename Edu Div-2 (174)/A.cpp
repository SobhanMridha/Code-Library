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

        int k = n;
        n -= 2;
        int ones = 0, zeros = 0;
        vector<int> arr(n);
        for(int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }

       bool flag = false;

       for(int i = 1; i < n-1; i++)
       {
           if(arr[i-1] == 1 && arr[i] == 0 && arr[i+1] == 1)
           {
               flag = true;
           }
       }

       if(flag)
       {
           cout << "NO\n";
       }
       else
       {
           cout << "YES\n";
       }




    }





    return 0;
}
