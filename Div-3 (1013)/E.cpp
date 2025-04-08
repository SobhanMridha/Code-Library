#include<bits/stdc++.h>
using namespace std;
const int sz = 1e7+5;
int prime[sz+5];
int prime_cnt[sz+5];


void seive()
{
    prime[0] = 1;
    prime[1] = 1;

    for(int i = 2; i*i <= sz; i++)
    {
        if(prime[i] == 0)
        {
            for(int j = i*i; j <= sz; j+=i)
            {
                prime[j] = 1;
            }
        }

    }


}

void pre_sum_prime()
{
    int cnt = 0;
    prime_cnt[0] = 0;
    prime_cnt[1] = 0;

    for(int i = 2; i <= sz; i++)
    {
        if(prime[i] == 0)
        {
            cnt++;
            prime_cnt[i] = cnt;
        }
        else
        {
             prime_cnt[i] = cnt;
        }
    }
}


int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);

    seive();
    pre_sum_prime();


    int test;
    cin >> test;

    while(test--)
    {
        int n;
        cin >> n;

        int ans = 0;
        for(int i = 1; i <= n; i++)
        {
           int div = n / i;

           ans += prime_cnt[div];
        }

        cout << ans << "\n";


    }





    return 0;
}
