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
        ll a, b, n;
        cin>>a>>b>>n;
        ll x[n];
        for(ll i=0; i<n; i++)
        {
            cin>>x[i];
        }
        ll s=b;
        for(ll i=0; i<n; i++)
        {
            s+=min(a,x[i]+1);
            s--;
        }
        cout<<s<<'\n';
    }
    return 0;
}