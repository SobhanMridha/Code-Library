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
        int arr[3];
        cin >> arr[0] >> arr[1] >> arr[2];

        sort(arr, arr+3);

        if(arr[0] % 2 != 0 && arr[1] % 2 != 0)
        {
            cout << (arr[0] + arr[1] + arr[2]) - arr[2] - 1 << "\n";
        }
        else
        {
            cout << (arr[0] + arr[1] + arr[2]) - arr[2] << "\n";
        }



    }






    return 0;
}
