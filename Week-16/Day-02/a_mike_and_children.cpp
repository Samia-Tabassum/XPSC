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
        ll n, ans=INT_MIN;
        cin>>n;
        ll a[n];
        for(int i=0; i<n; i++)
        {
            cin>>a[i];
        }
        map<ll, ll> m;
        for(ll i=0; i<n; i++)
        {
            for(ll j=i+1; j<n; j++)
            {
                m[a[i]+a[j]]++;
                ans=max(ans,m[a[i]+a[j]]);
            }
        }
        cout<<ans<<'\n';
    }
    return 0;
}