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

          int n;
          cin >> n;

          vector<int> ans(2*n+1, 0);

          int freq[2*n+1] = {0};

          for(int i = 1; i <= n; i++)
          {
              for(int j = 1; j <= n; j++)
              {
                  int val;
                  cin >> val;
                  ans[i+j] = val;
                  freq[val] = 1;
              }
          }

          int first = -1;
          for(int i = 1; i <= 2*n; i++)
          {
              if(freq[i] == 0)
                ans[0] = i;
          }

          for(auto val : ans)
            {
                if(val != 0)
                    cout << val << " ";
            }

          cout << "\n";


    }




    return 0;
}
