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

        vector<int> arr(n);
        for(int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }

        sort(arr.begin(), arr.end());

        if(arr[0] == 0 && arr[n-1] == 0)
        {
            cout << "-1\n";
        }
        else
        {
            if(arr[n-1] > 0)
            {
                cout << arr[n-1] << " " << arr[n-1] << "\n";
            }
            else
            {
                cout << arr[0] << " " << arr[0] << "\n";
            }
        }



    }






    return 0;
}
