#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        string s;
        cin>>n>>s;
        stack<char> st;
        for(char c:s)
        {
            if(c=='(')
                st.push(c);
            else if(!st.empty() && c==')' && st.top()=='(')
                st.pop();
            else
                st.push(c);
        }
        cout<<st.size()/2<<'\n';
    }
    return 0;
}