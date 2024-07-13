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
        ll n, k;
        cin>>n>>k;
        ll l=0, r=n, mid, ans=-1;
        while(l<=r)
        {
            mid=(l+r)/2;
            ll p=n-mid;
            ll s=(p*(p+1))/2;
            if(s-mid==k)
            {
                ans=mid;
                break;
            }
            else if(s-mid<k)
            {
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