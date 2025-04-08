#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);


    int n;
    cin >> n;

    vector<int> arr(n);

    long long sum = 0, evenSum = 0, oddSum = 0, oddCnt = 0;
    int mn = INT_MAX;
    bool even = false, odd = false;

    for(int i = 0; i < n; i++)
    {
        cin >> arr[i];

        sum += arr[i];
        if(arr[i] % 2 == 0)
        {
            even = true;
            evenSum += arr[i];
        }
        else
        {
            odd =true;
            oddSum += arr[i];
            mn = min(mn, arr[i]);
            oddCnt++;
        }
    }

    if(!odd)
    {
        cout << sum << "\n";
    }
    else if(!even)
    {
        if(n % 2 == 0)
        {
            cout << oddSum << "\n";
        }
        else
        {
            cout << oddSum - mn << "\n";
        }
    }
    else
    {
        if(oddCnt % 2 == 0)
        {
            cout << evenSum + oddSum << "\n";

        }
        else
        {
            cout << evenSum + (oddSum - mn) << "\n";
        }
    }




    return 0;
}
