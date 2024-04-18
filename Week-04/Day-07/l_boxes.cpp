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
        ll n;
        cin>>n;
        vector<ll> a(n);
        for(ll i=0; i<n; i++)
        {
            cin>>a[i];
        }
        sort(a.begin(),a.end(),greater<ll>());
        ll x=a[0], ans=1, l=0, r=n-1;
        while(l<r)
        {
            if(x<a[r])
            {
                ans++;
                x=a[l];
                l++;
            }
            else
            {
                x ^= a[r];
                r--;
            }
        }
        cout<<ans<<'\n';
    }
    return 0;
}