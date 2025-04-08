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
        int m, n;
        cin >> n >> m;

        vector<int> arr1(n), arr2(m), lex;
        for(int i = 0; i < n; i++)
        {
            cin >> arr1[i];
        }

        int mn = INT_MAX, ind = -1;
        for(int i = 0; i < m; i++)
        {
            cin >> arr2[i];
            if(arr2[i] < mn)
            {
                ind = i;
            }
        }

//        for(int i = 0; i < m; i++)
//        {
//            cout << arr2[(i +(n - ind)) % m] << " ";
//        }




    }


    return 0;
}
