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

       string s;
       cin >> s;

       set<char> st;
       for(int i = 0; i < s.size(); i++)
       {
           st.insert(s[i]);
       }

       if(st.size() == 1)
       {
           cout << "NO\n";
       }
       else
       {
           for(int i = 0; i < s.size()-1; i++)
           {
               if(s[i] != s[i+1])
               {
                   swap(s[i], s[i+1]);
               }
           }

           cout << "YES\n";
           cout << s << "\n";
       }



    }


    return 0;
}
