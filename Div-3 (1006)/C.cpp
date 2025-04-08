#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);

    int test;
    cin >> test;
    vector<long long> pre;
    for(int i = 0; i <= 30; i++)
    {
        pre.push_back((1<<i) - 1);
    }


    while(test--)
    {
          long long n, x;
          cin >> n >> x;

          if(n == 1)
          {
              cout << x << "\n";
              continue;
          }

          auto lb = lower_bound(pre.begin(), pre.end(), x);

        long long val = pre[lb-pre.begin()];
        if(val > x)
        {
            val = pre[(lb-pre.begin())-1];
        }

        int ans = 0, ind = 0;
        for(int i = 0; i < min(val, n-1); i++)
        {

            if((x|i) > x)
            {
                break;
            }
            cout << i << " ";
            ans |= i;
            ind++;
        }

        if((ans |= ind) == x)
        {
            cout << ind << " ";
        }
        else
        {
            cout << x << " ";
        }


        ind++;

        for(int i = 0; i < n-ind; i++)
        {
            cout << "0 ";
        }

        cout << "\n";

    }






    return 0;
}
