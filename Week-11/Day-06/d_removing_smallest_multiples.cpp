#include<bits/stdc++.h>
#define ll long long
using namespace std;
int32_t main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--)
    {
        ll n, ans=0;
        string s;
        cin>>n>>s;
        vector<int> v(n,INT_MAX);
        for(int i=n; i>0; i--)
        {
            for(int j=i-1; j<n; j+=i)
            {
                if(s[j]=='1')
                    break;
                v[j]=min(v[j],i);
            }
        }
        for(int i=0; i<n; i++)
        {
            if(s[i]=='0')
                ans+=v[i];
        }
        cout<<ans<<'\n';
    }
    return 0;
}