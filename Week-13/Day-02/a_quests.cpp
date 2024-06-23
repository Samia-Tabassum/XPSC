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
        ll n, c, d, s=0, x=0;
        cin>>n>>c>>d;
        vector<ll> a(n);
        for(ll i=0; i<n; i++)
        {
            cin>>a[i];
        }
        sort(a.rbegin(),a.rend());
        for(ll i=0; i<n; i++)
        {
            if(x<d)
                s+=a[i];
            else
                break;
            x++;
        }
        if(s>=c)
        {
            cout<<"Infinity\n";
            continue;
        }
        if(a[0]*d<c)
        {
            cout<<"Impossible\n";
            continue;
        }
        auto ok=[&](ll mid)
        {
            ll sum=0, j=0;
            for(ll i=0; i<d; i++)
            {
                if(j<n)
                    sum+=a[j];
                j++;
                if(j>mid)
                    j=0;
            }
            return sum>=c;
        };
        ll l=0, r=d, mid, ans=0;
        while(l<=r)
        {
            mid=(l+r)/2;
            if(ok(mid))
            {
                ans=mid;
                l=mid+1;
            }
            else
                r=mid-1;
        }
        cout<<ans<<'\n';
    }
    return 0;
}