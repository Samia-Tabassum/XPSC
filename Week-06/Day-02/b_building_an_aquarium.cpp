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
        int n, x;
        cin>>n>>x;
        vector<int> a(n);
        for(int i=0; i<n; i++)
        {
            cin>>a[i];
        }
        sort(a.begin(),a.end());
        auto ok = [&](int mid)
        {
            int s=0;
            for (int i=0; i<n; i++)
            {
                s+=(a[i]<mid?(mid-a[i]):0);
            }
            return s<=x;
        };
        int l=1, r=2e9, mid, ans=0;
        while(l<=r)
        {
            mid=l+(r-l)/2;
            if(ok(mid))
            {
                ans=mid;
                l=mid+1;
            }
            else
            {
                r=mid-1;
            }
        }
        cout<<ans<<'\n';
    }
    return 0;
}