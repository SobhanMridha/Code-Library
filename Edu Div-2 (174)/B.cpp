#include<bits/stdc++.h>
using namespace std;

bool isValid(int i, int j, int n, int m)
{
    return (i >= 0 && j < m && i < n && j >= 0);
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);

    int test;
    cin >> test;

    while(test--)
    {
        int n, m;
        cin >> n >> m;


        vector<vector<int>> arr(n, vector<int>(m, 0));
        map<int, int> mp;
        set<int> st;

        for(int i = 0; i < n; i++)
        {
            for(int j = 0; j < m; j++)
            {
                cin >> arr[i][j];
                mp[arr[i][j]] = 0;
                st.insert(arr[i][j]);
            }
        }

        int x[4] = {0, 0, 1, -1};
        int y[4] = {1, -1, 0, 0};

        for(int i = 0; i < n; i++)
        {

            for(int j = 0; j < m; j++)
            {
                 for(int k = 0; k < 4; k++)
                 {
                     int indX = i+x[k];
                     int indY = j+y[k];

                     if(isValid(indX, indY, n, m))
                     {
                         if(arr[i][j] == arr[indX][indY])
                         {
                             mp[arr[i][j]] = 2;
                         }
                         else
                         {
                             if(mp[arr[i][j]] != 2)
                             {
                                 mp[arr[i][j]] = 1;
                             }
                         }
                     }
                 }


            }
        }

        int ans = 0, mx = 0;

        for(auto val : mp)
        {
            ans += val.second;
            mx = max(mx, val.second);
        }

        cout << ans - mx << "\n";








    }





    return 0;
}
