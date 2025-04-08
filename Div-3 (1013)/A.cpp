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

        int zero = 0, one = 0, three = 0, two = 0, five = 0;
        vector<int> arr(n);
        for(int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }

        bool flag = false;
        int ans = 0;

        for(int i = 0; i < n; i++)
        {
            if(arr[i] == 0)
            {
                zero++;
            }
            else if(arr[i] == 1)
            {
                one++;
            }
            else if(arr[i] == 3)
            {
                three++;
            }
            else if(arr[i] == 2)
            {
                two++;
            }
            else if(arr[i] == 5)
            {
                five++;
            }

            ans++;

            if(zero >= 3 && one >= 1 && three >= 1 && two >= 2 && five >= 1)
            {
                flag = true;
                break;

            }




        }

//        cout << zero << " " << one << " " << three << " " << two << " " << five;
        if(flag)
        {
            cout << ans << "\n";
        }
        else
        {
            cout << "0\n";
        }


    }






    return 0;
}
