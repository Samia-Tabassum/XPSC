#include<bits/stdc++.h>
#define ll long long
using namespace std;
int32_t main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL);
    int t=1;
    cin>>t;
    while(t--)
    {
        ll n, ans, x, l=1, r=1e10, mid;
        cin>>n;
        while(r-l>1)
        {
            mid=(l+r)/2;
            x=(mid*(mid-1))/2;
            if(x>n)
                r=mid;
            else
                l=mid;
        }
        x=(l*(l-1))/2;
        ans=n+l-x;
        cout<<ans<<'\n';
    }       
    return 0;
}