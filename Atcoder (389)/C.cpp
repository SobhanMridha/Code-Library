#include<bits/stdc++.h>
using namespace std;

int main()
{
//    ios::sync_with_stdio(false);
//    cin.tie(0);

    int q;
    cin >> q;

    long long ind = 1, sum = 0, del = 0;

    vector<long long> vec, pre;
    vec.push_back(0);
    pre.push_back(0);
    for(int i = 0; i < q; i++)
    {
        int x;
        cin >> x;
        if(x == 1)
        {
            int l;
            cin >> l;

             vec.push_back(l);
             pre.push_back(vec.back() + pre.back());

        }
        else if(x == 2)
        {
            sum += vec[ind];
            ind++;
            del++;

        }
        else
        {
            int y;
            cin >> y;

            cout << pre[y-1+del] - sum << "\n";
//            cout << pre[y] << " " << sum << "\n";

        }


    }



//    for(auto val : vec)
//        cout << val << " ";
//
//    cout << "\n";
//
//    for(auto val : pre)
//        cout << val << " ";
//    cout << "\n";






    return 0;
}
