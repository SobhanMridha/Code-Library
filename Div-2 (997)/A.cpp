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

          long long n, m, sum = 0;
          cin >> n >> m;

          int a, b;
          cin >> a >> b;

          for(int i = 0; i < n-1; i++)
          {
              int x, y;
              cin >> x >> y;
              sum += x + y;
          }

          sum += m + m;

          cout << sum * 2 << "\n";



    }

    return 0;
}
