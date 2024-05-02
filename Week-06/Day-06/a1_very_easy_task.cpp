#include<bits/stdc++.h>
#define int long long
using namespace std;
int32_t main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int n, x, y, l=0, r=2e9, mid, ans;
    cin>>n>>x>>y;
    while(l<=r)
    {
        mid=(l+r)/2;
        if(((mid/x)+(mid/y)) >= (n-1))
        {
            ans=mid;
            r=mid-1;
        }
        else
        {
            l=mid+1;
        }
    }
    cout<<ans+min(x,y)<<'\n';
    return 0;
}