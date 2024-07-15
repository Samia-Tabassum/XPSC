#include<bits/stdc++.h>
#define ll long long
using namespace std;
int32_t main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL);
    int t=1;
    //cin>>t;
    while(t--)
    {
        string s;
        cin>>s;
        int c=0;
        stack<char> st;
        for(auto ch:s)
        {
            if(!st.empty() && st.top()==ch)
            {
                st.pop();
                c++;
            }
            else
                st.push(ch);
        } 
        if(c%2)
            cout<<"Yes\n";
        else
            cout<<"No\n";
    }
    return 0;
}