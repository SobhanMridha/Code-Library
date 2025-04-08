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

        vector<int> arr1(n), arr2(n);
        set<int> st1, st2;

        for(int i = 0; i < n; i++)
        {
            cin >> arr1[i];
            st1.insert(arr1[i]);
        }

        for(int i = 0; i < n; i++)
        {
            cin >> arr2[i];
            st2.insert(arr2[i]);
        }


        int x = st1.size();
        int y = st2.size();

        if((x * y) >= 3)
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
