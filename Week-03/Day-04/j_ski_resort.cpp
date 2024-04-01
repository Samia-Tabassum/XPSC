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
        ll n, k, q, l=0, r=0, ans=0;
        cin>>n>>k>>q;
        ll a[n];
        for(ll i=0; i<n; i++)
        {
            cin>>a[i];
        }
        while(r<n)
        {
            if(a[r]<=q)
            {
                if(r-l+1 >= k)
                    ans+=(r-l-k+2);
            }
            else
                l=r+1;
            r++;
        }
        cout<<ans<<'\n';
    }
    return 0;
}