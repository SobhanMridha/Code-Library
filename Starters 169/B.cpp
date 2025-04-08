#include<bits/stdc++.h>
using namespace std;

int main()
{

    int test;
    cin >> test;

    while(test--)
    {
       int n;
       cin >> n;

       vector<int> arr(n);
       for(int i = 0; i < n; i++)
       {
           cin >> arr[i];
       }

       bool flag = true;

       for(int i = 1; i <= n; i++)
       {
           if(__builtin_popcount(arr[i-1]) != __builtin_popcount(i))
           {
             flag = false;
             break;
           }
       }

       if(flag)
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

