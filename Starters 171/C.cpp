#include<bits/stdc++.h>
using namespace std;

long long checkAns(string str, string s)
{
    long long ans = 0;
    if(s[0] != str[0])
    {
        s[0] =  str[0];
        ans++;
    }
    if(s[1] != str[1])
    {
        s[1] =  str[1];
        ans++;
    }
    if(s[2] != str[2])
    {
        s[2] =  str[2];
        ans++;
    }

    for(int i = 3; i < s.size(); i++)
    {
        if(s[i-3] != s[i])
        {
            s[i] = s[i-3];
            ans++;
        }
    }

    return ans;
}


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

        set<char> st;
        st.insert(s[0]);
        st.insert(s[1]);
        st.insert(s[2]);

        if(n == 3)
        {
            if(st.size() == 3)
            {
                cout << "0\n";
            }
            else if(st.size() == 2)
            {
                cout << "1\n";
            }
            else
            {
                cout << "2\n";
            }
            continue;
        }

        long long ans1 = checkAns("RGB", s);
        long long ans2 = checkAns("RBG", s);
        long long ans3 = checkAns("GRB", s);
        long long ans4 = checkAns("GBR", s);
        long long ans5 = checkAns("BRG", s);
        long long ans6 = checkAns("BGR", s);



//        cout << ans1 << " " << ans2 << " "  << ans3 << " " << ans4 << " " << ans5 << " " << ans6 << "\n";



        if(ans1 < ans2 && ans1 < ans3 && ans1 < ans4 && ans1 < ans5 && ans1 < ans6)
        {
            cout << ans1  << "\n";
        }
        else if(ans2 < ans1 && ans2 < ans3 && ans2 < ans4 && ans2 < ans5 && ans2 < ans6)
        {
            cout << ans2 << "\n";
        }
        else if(ans3 < ans1 && ans3 < ans2 && ans3 < ans4 && ans3 < ans5 && ans3 < ans6 )
        {
            cout << ans3  << "\n";
        }
        else if(ans4 < ans1 && ans4 < ans2 && ans4 < ans3 && ans4 < ans5 && ans4 < ans6)
        {
            cout << ans4  << "\n";
        }
        else if(ans5 < ans1 && ans5 < ans2 && ans5 < ans3 && ans5 < ans4 && ans5 < ans6)
        {

            cout << ans5  << "\n";
        }
        else if(ans6 < ans1 && ans6 < ans2 && ans6 < ans3 && ans6 < ans4 && ans6 < ans5 )
        {
            cout << ans6  << "\n";
        }



    }




    return 0;
}
