#include<bits/stdc++.h>
using namespace std;
char arr1[60][60];
char arr2[60][60];


bool check (int x, int y, int n, int m)
{
    bool flag = true;
    for(int i = 0; i < m; i++)
    {
        for(int j = 0; j < m; j++)
        {
            if(arr2[i][j] != arr1[x+i][y+j])
            {
                flag = false;
            }
        }
    }

    return flag;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);

    int n, m;
    cin >> n >> m;


    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < n; j++)
        {
            cin >> arr1[i][j];
        }
    }


    for(int i = 0; i < m; i++)
    {
        for(int j = 0; j < m; j++)
        {
            cin >> arr2[i][j];
        }
    }

    bool ck = false;
    for(int i = 0; i <= n-m; i++)
    {
        for(int j = 0; j <= n-m; j++)
        {
            if(check(i, j, n, m))
            {
                cout << i+1 << " " << j+1 << "\n";
                ck = true;
                break;
            }
        }

        if(ck)
        {
            break;
        }
    }



    return 0;
}
