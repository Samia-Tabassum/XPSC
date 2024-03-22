#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    ll t;
    cin>>t;
    while(t--)
    {
        ll n, ans=0, x=0;
        cin>>n;
        vector<ll> a(n+1);
        for(ll i=1; i<=n; i++)
        {
            cin>>a[i];
        }
        for(ll i=1; i<=n; i++)
        {
            if(a[i]>i)
            {
                x=abs(a[i]-i);
                ans=max(ans,x);
            }
        }
        cout<<ans<<'\n';
    }
    return 0;
}