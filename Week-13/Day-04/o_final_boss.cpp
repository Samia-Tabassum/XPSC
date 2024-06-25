#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll t;
    cin>>t;
    while(t--)
    {
        ll n, h;
        cin>>h>>n;
        ll a[n], c[n];
        for(ll i=0; i<n; i++)
        {
            cin>>a[i];
        }
        for(ll i=0; i<n; i++)
        {
            cin>>c[i];
        }
        ll l=1, r=1e12, mid, ans=1e14, s, x;
        while(l<=r)
        {
            mid=(l+r)/2;
            s=0;
            for(ll i=0; i<n; i++)
            {
                x=((c[i]+mid-1)/c[i])*a[i];
                s+=x;
                if(s>=h)
                    break;
            }
            if(s>=h)
            {
                ans=min(ans, mid);
                r=mid-1;
            }
            else
            {
                l=mid+1;
            }
        }
        cout<<ans<<'\n';
    }
    return 0;
}