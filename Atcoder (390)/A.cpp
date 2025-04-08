#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);


    int arr[5];
    for(int i = 0; i < 5; i++)
        cin >> arr[i];


    bool flag = true;
    for(int i = 1; i < 5; i++)
    {
        if(arr[i-1] > arr[i])
        {
            swap(arr[i-1], arr[i]);
            flag = false;
            break;
        }

    }

    if(flag)
    {
        cout << "No\n";
    }
    else
    {
        flag = true;
        for(int i = 1; i < 5; i++)
        {
            if(arr[i-1] > arr[i])
            {
                flag = false;

            }

        }

        if(flag)
        {
            cout << "Yes\n";
        }
        else
        {
            cout << "No\n";
        }
    }







    return 0;
}
