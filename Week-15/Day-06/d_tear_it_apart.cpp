#include <bits/stdc++.h>
#define ll long long
using namespace std;
int32_t main()
{   
    ios_base::sync_with_stdio(false); cin.tie(NULL);
    int t=1;
    cin>>t;
    while(t--)
    {
        string s;
        cin>>s;
        ll c, mx, mn=INT_MAX;
        for(char i='a'; i<='z'; i++)
        {
            c=0, mx=0;
            for(ll j=0; j<s.size(); j++)
            {
                if(s[j] != i)
                {
                    c++;
                    mx=max(mx,c);
                }
                else
                { 
                    c = 0;
                }
            }
            mn=min(mn,mx);
        }
        if(mn==0)
            cout<<"0\n";
        else
        {
            c=0;
            while(mn != 1)
            {
                mn/=2;
                c++;
            }
            cout<<c+mn<<'\n';
        }
    }
    return 0;     
}