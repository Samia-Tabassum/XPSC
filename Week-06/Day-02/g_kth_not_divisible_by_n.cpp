#include<bits/stdc++.h>
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
        int n, k, ans;
        cin>>n>>k;
        ans=k+((k-1)/(n-1));
        cout<<ans<<'\n';
    }
    return 0;
}