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
        string s1, s2, s3;
        cin >> s1 >> s2 >> s3;

        int zeros = 0, ones = 0;
        for(int i = 0; i < n; i++)
        {
            if(s1[i] == '0')
                zeros++;
            if(s2[i] == '0')
                zeros++;
            if(s3[i] == '0')
                zeros++;
            if(s1[i] == '1')
                ones++;
            if(s2[i] == '1')
                ones++;
            if(s3[i] == '1')
                ones++;
        }

        if(zeros % n != 0 && ones % n != 0)
        {
            cout << "-1\n";
            continue;
        }

        int ans = 0, mx = 0;



        if(zeros > ones)
        {
            int cnt = 0;
            for(int i = 0; i < n; i++)
            {
                if(s1[i] == '1')
                    cnt++;
            }
            mx = max(mx, cnt);
            cnt = 0;
            for(int i = 0; i < n; i++)
            {
                if(s2[i] == '1')
                    cnt++;
            }
            mx = max(mx, cnt);
            cnt = 0;
            for(int i = 0; i < n; i++)
            {
                if(s3[i] == '1')
                    cnt++;
            }
            mx = max(mx, cnt);
            cnt = 0;
        }
        else
        {
            int cnt = 0;
            for(int i = 0; i < n; i++)
            {
                if(s1[i] == '0')
                    cnt++;
            }
            mx = max(mx, cnt);
            cnt = 0;
            for(int i = 0; i < n; i++)
            {
                if(s2[i] == '0')
                    cnt++;
            }
            mx = max(mx, cnt);
            cnt = 0;
            for(int i = 0; i < n; i++)
            {
                if(s3[i] == '0')
                    cnt++;
            }
            mx = max(mx, cnt);
            cnt = 0;
        }



        if(mx == 0)
        {
            cout << "0\n";
        }
        else
        {
            cout << n - mx << "\n";
        }

    }





    return 0;
}
