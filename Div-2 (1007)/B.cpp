#include<bits/stdc++.h>
using namespace std;

int main()
{
//    ios::sync_with_stdio(false);
//    cin.tie(0);

    vector<long long> vec;
    long long sum = 0;
    for(int i = 1; i <= 10000000; i++)
    {
        sum += i;
        long long v = sqrt(sum);
        if(v*v == sum)
        {
            vec.push_back(i);
        }
    }


    int test;
    cin >> test;

    while(test--)
    {
        int n;
        cin >> n;

        bool flag = true;
        for(auto val : vec)
        {
            if(val ==  n)
            {
                flag = false;
            }
        }

        if(!flag)
        {
            cout << "-1\n";
            continue;
        }


        cout << "2 1";
        for(int i = 3; i <= n; i++)
        {
            if(binary_search(vec.begin(), vec.end(), i))
            {
                cout << " " << i+1;
                cout << " " << i;
                i++;
            }
            else
            {
                cout << " " << i;
            }

        }

        cout << "\n";
    }





    return 0;
}
