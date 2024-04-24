#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--)
    {
        int n, q, k;
        cin>>n>>q;
        vector<ll> a(n), p(n);
        for(int i=0; i<n; i++)
        {
            cin>>a[i];
        }
        sort(a.begin(),a.end(),greater<ll>());
        p[0]=a[0];
        for(int i=1; i<n; i++)
        {
            p[i]=p[i-1]+a[i];
        }
        while(q--)
        {
            cin>>k;
            int ans=lower_bound(p.begin(),p.end(),k)-p.begin();
            if(ans>=n)
                cout<<"-1\n";
            else
                cout<<ans+1<<'\n';
        }
    }
    return 0;
}