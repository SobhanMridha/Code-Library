#include<bits/stdc++.h>
using namespace std;


bool ck(vector<int> &arr)
{
    int temp = 0, f = 1;

    for(int i = 0; i < arr.size()-1; i++)
    {
        int g = __gcd(arr[i], arr[i+1]);
        if(g >= temp)
        {
            temp = g;
        }
        else
        {
            f = 0;
        }
    }

    return f;
}


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

        vector<int> arr(n), arr1, arr2, arr3;
        for(int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }

        int temp = 0, ind = -1;
        for(int i = 0; i < n-1; i++)
        {
            int g = __gcd(arr[i], arr[i+1]);
            if(g >= temp)
            {
                temp = g;
            }
            else
            {
                ind = i;
                break;
            }
        }

        if(ind == -1)
        {
            cout << "YES\n";
            continue;
        }

        for(int i = 0; i < n; i++)
        {
            if(ind == 0)
                continue;

            if(i != ind-1)
            {
                arr1.push_back(arr[i]);
            }
        }
        for(int i = 0; i < n; i++)
        {
            if(i != ind)
                arr2.push_back(arr[i]);
        }

        for(int i = 0; i < n; i++)
        {
            if(ind == n-1)
            {
                continue;
            }

            if(i != ind+1)
            {
                arr3.push_back(arr[i]);
            }
        }


        int f1 = ck(arr1);
        int f2 = ck(arr2);
        int f3 = ck(arr3);

        if(f1 || f2 || f3)
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

