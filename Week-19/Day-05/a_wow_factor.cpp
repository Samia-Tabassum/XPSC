#include<bits/stdc++.h>
#define ll long long
using namespace std;
int32_t main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL);
    int tc=1;
    //cin>>tc;
    while(tc--)
    {
        string s;
        cin>>s;
        ll n=s.size(), ans=0, c=0, t=0;
        for(int i=0; i<n-1; i++)
        {
            if(s[i]=='v' && s[i+1]=='v')
                t++;
        }
        for(int i=0; i<n-1; i++)
        {
            if(s[i]=='v' && s[i+1]=='v')
                c++;
            if(s[i]=='o')
                ans+=c*(t-c);
        }
        cout<<ans<<'\n';
    }
    return 0;
}