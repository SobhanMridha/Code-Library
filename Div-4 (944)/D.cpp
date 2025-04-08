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

        long long n, k, q;
        cin >> n >> k >> q;

        vector<int> arrA(k), arrB(k);
        for(int i = 0; i < k; i++)
            cin >> arrA[i];

        for(int i = 0; i < k; i++)
            cin >> arrB[i];

        while(q--)
        {
            long long x;
            cin >> x;

            if(x == n)
            {
                cout << arrB[k-1] << " ";
                continue;
            }


            int ub = upper_bound(arrA.begin(), arrA.end(), x) - arrA.begin();

            if(ub == 0)
            {
                long long en = arrA[ub];
                long long st = 0;
                long long stt = 0;
                long long ent = arrB[ub];

                double v = (1.0*(ent - stt) / (en - st));

                long long des = x - st;
                v = v * des;

                cout << stt + (long long)v << " ";
            }
            else
            {
                long long en = arrA[ub];
                long long st = arrA[ub-1];
                long long stt = arrB[ub-1];
                long long ent = arrB[ub];

                double v = (1.0*(ent - stt) / (en - st));

                long long des = x - st;
                v = v * des;

                cout << stt + (long long)v << " ";


            }

        }
        cout << "\n";

    }


    return 0;
}
