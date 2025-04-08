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
        int n, x;
        cin >> n >> x;

        long long mx = -1, val = -1;
        vector<long long> arr(n);
        map<long long, long long> freq;
        for(int i = 0; i < n; i++)
        {
            cin >> arr[i];
            freq[arr[i]]++;
            if(freq[arr[i]] > mx)
            {
                mx = freq[arr[i]];
                val = arr[i];
            }
        }

        long long value = -1;
        for(int i = 0; i < n; i++)
        {
            long long v = arr[i];
            v = arr[i] * x;
            freq[v]++;
            if(freq[v] > mx)
            {
                mx = freq[v];
                val = arr[i];
                value = v;
            }
        }

        int l = 0, r = 0;
        for(int i = 0; i < n; i++)
        {
            if(arr[i] == val)
            {
                l = i;
                break;
            }
        }

         for(int i = n-1; i >= 0; i--)
        {
            if(arr[i] == val)
            {
                r = i;
                break;
            }
        }

        int neg = 0;
        for(int i = l; i <= r; i++)
        {
            if(arr[i] == value)
                neg++;
        }


        cout << mx - neg << "\n";




    }





    return 0;
}
