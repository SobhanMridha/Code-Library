#include<bits/stdc++.h>
using namespace std;

int main()
{
//    ios::sync_with_stdio(false);
//    cin.tie(0);

    string s;
    cin >> s;

    stack<char> stk;

    bool flag = true;
    for(int i = 0; i < s.size(); i++)
    {
        char ch = s[i];

        if(ch == '(' || ch == '[' || ch == '<')
        {
            stk.push(s[i]);
        }
        else
        {
            if(stk.empty())
            {
                flag = false;
                break;
            }

            char c = stk.top();

            if(c == '(' && ch == ')')
            {
                stk.pop();
            }
            else if(c == '[' && ch == ']')
            {
                stk.pop();
            }
            else if(c == '<' && ch == '>')
            {
                stk.pop();
            }
            else
            {
                flag = false;
                break;
            }
        }
    }

    if(!flag)
    {
        cout << "No\n";
    }
    else
    {
        if(stk.empty())
        {
            cout << "Yes\n";
        }
        else
        {
            cout << "No\n";
        }
    }





    return 0;
}
