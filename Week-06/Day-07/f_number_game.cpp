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
        int n, k=0;
        cin>>n;
        vector<int> a(n);
        for(int i=0; i<n; i++)
        {
            cin>>a[i];
        }
        auto ok=[&](int k)
        {
            multiset<int> ms;
            for(int x : a)
                ms.insert(x);
            for(int i=0; i<k; i++)
            {
                if(ms.empty())
                    return false;
                int x=k-i;
                auto it=ms.upper_bound(x);
                if(it==ms.begin())
                    return false;
                it--;
                ms.erase(it);
                if(!ms.empty())
                {
                    it=ms.begin();
                    int v=*it;
                    v+=x;
                    ms.erase(it);
                    ms.insert(v);
                }
            }
            return true;
        };
        int l=0, r=n, mid;
        while(l<=r)
        {
            mid=(l+r)/2;
            if(ok(mid))
            {
                k=mid;
                l=mid+1;
            }
            else
                r=mid-1;
        }
        cout<<k<<'\n';
    }
    return 0;
}