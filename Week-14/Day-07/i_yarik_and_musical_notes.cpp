#include<bits/stdc++.h>
#define ll long long
using namespace std;
int32_t main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--)
    {
        ll n, ans=0;
        cin>>n;
        ll a[n];
        map<ll, ll> m;
        for(int i=0; i<n; i++)
        {
            cin>>a[i];
        }
        for(int i=0; i<n; i++)
        {
            ans+=m[a[i]];
            if(a[i]==1)
                ans+=m[2];
            else if(a[i]==2)
                ans+=m[1];
            m[a[i]]++;
        }
        cout<<ans<<'\n';
    }
    return 0;
}