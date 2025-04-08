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

        int n, m;
        cin >> n >> m;

        vector<int> arr(n);

        for(int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }

        cin >> m;

        for(int i = 1; i < n; i++)
        {
            if((i-1) == 0 && arr[i-1] > arr[i])
            {
                arr[i-1] = m - arr[i-1];
            }
            else if(arr[i-1] > arr[i])
            {
                arr[i-1] = m - arr[i-1];
                if(n > 2 && arr[i-2] > arr[i-1])
                {
                    arr[i-2] = m - arr[i-2];
                }
            }
        }


        bool flag = true;
        for(int i = 1; i < n; i++)
        {
            if(arr[i-1] > arr[i])
            {
                flag = false;
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
