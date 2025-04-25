#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);

    int q;
    cin >> q;

    vector<int> arr;
    int i = 0;
    while(q--)
    {
        int ck;
        cin >> ck;

        queue<int> q;

        if(ck == 1)
        {
            int x;
            cin >> x;
            arr.push_back(x);
        }
        else
        {
            cout << arr[i++] << "\n";

        }
    }








    return 0;
}
