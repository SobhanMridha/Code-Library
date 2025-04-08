#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);

    int n;
    cin >> n;

    char arr[n+2][n+2];
    for(int i = 1; i <= n; i++)
    {
        int j = n+1-i;

        if(i <= j)
        {
            for (int x = i; x <= j; x++)
            {
                for (int y = i; y <= j; y++)
                {
                    if(i % 2 == 0)
                    {
                        arr[x][y] = '.';
                    }
                    else
                    {
                        arr[x][y] = '#';
                    }

                }
            }
        }
    }


    for(int x = 1; x <= n; x++)
    {
        for(int y = 1; y <= n; y++)
        {
            cout << arr[x][y];
        }
        cout << "\n";
    }



    return 0;
}
