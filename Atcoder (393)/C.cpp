#include<bits/stdc++.h>
using namespace std;

int main()
{
//    ios::sync_with_stdio(false);
//    cin.tie(0);


    int n, m;
    cin >> n >> m;

    vector<int> vec[n+5];

    int rem = 0;
    for(int i = 0; i < m; i++)
    {
        int x, y;
        cin >> x >> y;

        if(x == y)
        {
            rem++;
        }
        else if(find(vec[y].begin(), vec[y].end(), x) != vec[y].end())
        {
            rem++;
        }
        else
        {
            vec[y].push_back(x);
            vec[x].push_back(y);
        }

    }


//    for(int i = 1; i <= n; i++)
//    {
//        cout << i << " : ";
//        for(int j  = 0; j < vec[i].size(); j++)
//        {
//            cout << vec[i][j] << " ";
//        }
//        cout << "\n";
//    }
    cout << rem << "\n";


    return 0;
}
