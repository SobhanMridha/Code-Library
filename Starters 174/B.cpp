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

          string s;
          cin >> s;

          int cnt = 0;
          for(int i = 0; i < s.size(); i++)
          {
              if(s[i] == 'z')
                cnt++;
          }

          if(cnt == s.size())
          {
              cout << "-1\n";
          }
          else
          {
              for(int i = 0; i < n; i++)
              {
                  cout << "z";
              }

              cout << "\n";
          }
    }





    return 0;
}
