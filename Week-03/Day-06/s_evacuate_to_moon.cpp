#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--)
    {
        ll n, m, h;
        ll ans=0, x;
        cin>>n>>m>>h;
        vector<ll> c(n), p(m);
        for(int i=0; i<n; i++)
        {
            cin>>c[i];
        }
        for(int i=0; i<m; i++)
        {
            cin>>p[i];
        }
        sort(c.begin(),c.end(),greater<int>());
        sort(p.begin(),p.end(),greater<int>());
        for(int i=0; i<n && i<m; i++)
        {
            ans+=min(c[i],p[i]*h);
        }
        cout<<ans<<'\n';
    }
    return 0;
}