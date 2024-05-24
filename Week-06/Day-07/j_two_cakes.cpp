#include<bits/stdc++.h>
#define int long long
using namespace std;
int32_t main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int n, a, b, x, y, ans=INT_MIN;
    cin>>n>>a>>b;
    for(int i=1; i<n; i++)
    {
        x=(a/i), y=(b/(n-i));
        ans=max(ans,min(x,y));
    }
    cout<<ans<<'\n';
    return 0;
}