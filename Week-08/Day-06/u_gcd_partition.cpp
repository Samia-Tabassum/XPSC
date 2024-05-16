#include <bits/stdc++.h>
#define int long long
using namespace std;
int32_t main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--)
    {
        int n, s=0, x=0, ans=1;
        cin>>n;
        int a[n];
        for(int i=0; i<n; i++)
        {
            cin>>a[i];
            s+=a[i];
        }
        for(int i=0; i<n-1; i++)
        {
            x+=a[i];
            s-=a[i];
            ans=max(ans,__gcd(s,x));
        }
        cout<<ans<<'\n';
    }
}