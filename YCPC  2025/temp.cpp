#include<bits/stdc++.h>
using namespace std;

bool cmp (pair<int, int> &a, pair<int, int> &b)
{

}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);


    int q;
    cin >> q;


    vector<int, int> vec;
    map<int, int> mp;
    while(q--)
    {
        int x;
        cin >> x;

        if(x == 1)
        {
            int val;
            cin >> val;
            mp[val]++;
            vec.push_back({})

        }
        else
        {
            sort(vec.begin(), vec.end(), cmp);
            if(mp.empty())
            {

                cout << "empty\n";
            }
            else
            {


            }

        }
    }






    return 0;
}
