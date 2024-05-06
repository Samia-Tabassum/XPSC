#include<bits/stdc++.h>
#define int long long
using namespace std;
const int mod=1e9+7;
int32_t main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--)
    {
        int n, k, cur=1, ans=0;
        cin>>n>>k;
        while(k)
        {
            if(k%2)
            {
                ans+=cur;
                ans%=mod;
            }
            cur*=n;
            cur%=mod;
            k/=2;
        }
        cout<<ans<<'\n';
    }
    return 0;
}