#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);

    int n;
    cin >> n;

    bool flag = true;
    vector<int> arr(n);
    for(int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    for(int i = 1; i < n; i++)
    {
        if(arr[i-1] >= arr[i])
        {
            flag = false;
        }
    }

    if(flag)
        cout << "Yes\n";
    else
        cout << "No\n";





    return 0;
}
