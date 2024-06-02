#include <bits/stdc++.h>
#define ll long long
using namespace std;
const int N=5e5+5;
int n, m;
ll a[N][2];
ll strong[N][2];
ll sum[N][2];
ll strongSum[N];
ll getSumStrong(int l, int r)
{
    if(l>r)
        return 0;
    return strongSum[r]-strongSum[l-1];
}
int bsearch_n(int x)
{
    int l=0, r=n+m+1, mid, y, ans=n+m+1;
    while(l<=r)
    {
        mid=(l+r)/2;
        y=strong[mid][0];
        if(mid>=x)
        {
            y-=(a[x][0]>a[x][1]);
        }
        if(y>n)
        {
            r=mid-1;
        }
        else if(y==n)
        {
            r=mid-1;
            ans=mid;
        }
        else
        {
            l=mid+1;
        }
    }
    return ans;
}
int bsearch_m(int x)
{
    int l=0, r=n+m+1, mid, y, ans=n+m+1;
    while(l<=r)
    {
        mid=(l+r)/2;
        y=strong[mid][1];
        if(mid>=x)
        {
            y-=(a[x][1]>a[x][0]);
        }
        if(y>m)
        {
            r=mid-1;
        }
        else if(y==m)
        {
            r=mid-1;
            ans=mid;
        }
        else
        {
            l=mid+1;
        }
    }
    return ans;
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--)
    {
        cin>>n>>m;
        for(int i=1; i<=n+m+1; i++)
        {
            cin>>a[i][0];
        }
        for(int i=1; i<=n+m+1; i++)
        {
            cin>>a[i][1];
        }
        for(int i=1; i<=n+m+1; i++)
        {
            strongSum[i]=strongSum[i-1]+max(a[i][0],a[i][1]);
            sum[i][0]=sum[i-1][0]+a[i][0];
            sum[i][1]=sum[i-1][1]+a[i][1];
            strong[i][0]=strong[i-1][0]+(a[i][0]>a[i][1]?1:0);
            strong[i][1]=strong[i-1][1]+(a[i][1]>a[i][0]?1:0);
        }
        for(int i=1; i<=n+m+1; i++)
        {
            int in=bsearch_n(i);
            int im=bsearch_m(i);
            ll ans=0;
            if(in<=im)
            {
                ans+=getSumStrong(1,in);
                ans+=sum[n+m+1][1]-sum[in][1];
                if(i<=in)
                {
                    ans-=max(a[i][0],a[i][1]);
                }
                else
                {
                    ans-=a[i][1];
                }
            }
            else
            {
                ans+=getSumStrong(1,im);
                ans+=sum[n+m+1][0]-sum[im][0];
                if(i<=im)
                {
                    ans-=max(a[i][0],a[i][1]);
                }
                else
                {
                    ans-=a[i][0];
                }
            }
            cout<<ans<<" ";
        }
        cout<<'\n';
    }
    return 0;
}