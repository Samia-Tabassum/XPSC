#include<bits/stdc++.h>
#define ll long long
using namespace std;
int32_t main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    ll t;
    cin>>t;
    while(t--)
    {
        ll n, k, ans=0;
        cin>>n>>k;
        vector<ll> a(n);
        for(ll i=0; i<n; i++)
        {
            cin>>a[i];
            ans+=(a[i]/k);
            a[i]%=k;
        }
        sort(a.begin(),a.end());
        ll l=0, r=n-1;
        while(l<r)
        {
            if(a[l]+a[r]>=k)
            {
                ans++;
                r--;
            }
            l++;
        }
        cout<<ans<<'\n';
    }
    return 0;
}