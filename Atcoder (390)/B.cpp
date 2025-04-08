#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);


    int n;
    cin >> n;

    vector<long long> arr(n);
    for(int i = 0; i < n; i++)
        cin >> arr[i];


        double div = (arr[1]*1.0) / arr[0];
        bool flag = true;
        for(int i = 1; i < n; i++)
        {
            long long ans = (arr[i] / div);

            if(ans != arr[i-1])
                flag = false;
        }

        if(flag)
            cout << "Yes\n";
        else
            cout << "No\n";
    }








    return 0;
}
