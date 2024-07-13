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
        int n, x;
        cin>>n>>x;
        int a[n];
        for(int i=0; i<n; i++)
        {
            cin>>a[i];
        }
        vector<ll> ans(n+1, INT_MIN);
        ans[0]=0;
        for(int i=0; i<n; i++)
        {
            ll s=0;
            for(int j=i; j<n; j++)
            {
                s+=a[j];
                ans[j-i+1]=max(ans[j-i+1], s);
            }
        }
        for(int i=0; i<=n; i++)
        {
            ll mx=0;
            for(int j=0; j<=n; j++)
            {
                mx=max(min(i,j)*x+ans[j], mx);
            }
            cout<<mx<<" ";
        }
        cout<<'\n';
    }
    return 0;
}