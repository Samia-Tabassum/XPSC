#include <bits/stdc++.h>
#define int long long
using namespace std;
int32_t main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    string t, p;
    cin>>t>>p;
    int n=t.size(), m=p.size();
    vector<int> a(n);
    for (int i=0; i<n; i++)
    {
        cin>>a[i];
    }
    auto ok = [&](int mid)
    {
        vector<bool> del(n+1);
        for (int i=0; i<mid; i++)
        {
            del[a[i]]=true;
        }
        int j=0;
        bool flag=false;
        for (int i=0; i<n; i++)
        {
            if (t[i]==p[j] && !del[i+1])
            {
                j++;
            }
            if(j==m)
            {
                flag=true;
                break;
            }
        }
        return flag;
    };
    int l=0, r=n, mid, ans=0;
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
    return 0;
}