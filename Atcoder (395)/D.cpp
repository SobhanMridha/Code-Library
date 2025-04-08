#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);

    int n, q;
    cin >> n >> q;

    vector<int> pigeons(n+1), pos(n+1);

    for(int i = 1; i <= n; i++)
    {
        pigeons[i] = i;
        pos[i] = i;
    }

    while(q--)
    {
        int ck;
        cin >> ck;

        if(ck == 1)
        {
            int a, b;
            cin >> a >> b;
            pos[a] = pigeons[b];

        }
        else if(ck == 2)
        {
            int a, b;
            cin >> a >> b;
            swap(pigeons[a], pigeons[b]);
            pos[a] = pigeons[b];
            pos[b] = pigeons[a];

        }
        else
        {
            int a;
            cin >> a;
            cout << pos[pigeons[a]] << "\n";
        }
    }





    return 0;
}
