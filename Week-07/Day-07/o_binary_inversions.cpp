#include <bits/stdc++.h>
using namespace std;
#define int long long
int inv(int n, int a[])
{
    int ans=0, o=0;
    for(int i=0; i<n; i++)
    {
        if(a[i]==1)
            o++;
        else
            ans+=o;
    }
    return ans;
}
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
        int a[n];
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
        }
        int ans=inv(n, a);
        int idx = n;
        for(int i=0; i<n; i++)
        {
            if(a[i]==0)
            {
                a[i]=1;
                idx=i;
                break;
            }
        }
        ans=max(ans,inv(n, a));
        if(idx != n)
        {
            a[idx]=0;
        }
        for(int i=n-1; i>=0; i--)
        {
            if(a[i]==1)
            {
                a[i]=0;
                break;
            }
        }
        ans=max(ans,inv(n, a));
        cout<<ans<<'\n';
    }
    return 0;
}