#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int n, m, k, x, y;
    cin>>n>>m>>k;
    vector<ll> a(n), l(m+1), r(m+1), d(m+1), df(m+2), v(n+2);
    for(int i=0; i<n; i++)
    {
        cin>>a[i];
    }
    for(int i=1; i<=m; i++)
    {
        cin>>l[i]>>r[i]>>d[i];
    }
    for(int i=0; i<k; i++)
    {
        cin>>x>>y;
        df[x]++;
        df[y+1]--;
    }
    for(int i=1; i<=m; i++)
    {
        df[i]+=df[i-1];
        v[l[i]]+=(df[i]*d[i]);
        v[r[i]+1]-=(df[i]*d[i]);
    }
    for(int i=1; i<=n; i++)
    {
        v[i]+=v[i-1];
        cout<<v[i]+a[i-1]<<" ";
    }
    cout<<'\n';
    return 0;
}