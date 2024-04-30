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
        int n;
        cin>>n;
        vector<int> a(n);
        for(int i=0; i<n; i++)
        {
            cin>>a[i];
        }
        sort(a.begin(),a.end());
        auto ok=[&](int s)
        {
            int x=0, w=1;
            for(int i=0; i<n; i++)
            {
                if(a[i]-a[x] > 2*s)
                {
                    x=i;
                    w++;
                }
            }
            return w<=3;
        };
        int l=0, r=1e9, mid, ans=0;
        while(l<=r)
        {
            mid=(l+r)/2;
            if(ok(mid))
            {
                ans=mid;
                r=mid-1;
            }
            else
            {
                l=mid+1;
            }
        }
        cout<<ans<<'\n';
    }
    return 0;
}