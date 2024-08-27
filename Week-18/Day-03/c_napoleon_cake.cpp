#include<bits/stdc++.h>
#define ll long long
using namespace std;
int32_t main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL);
    int tc=1;
    cin>>tc;
    while(tc--)
    {
        ll n;
        cin>>n;
        int a[n];
        vector<pair<ll,ll>> v;
        for(int i=0; i<n; i++)
        {
            cin>>a[i];
        }
        for(int i=n-1; i>=0; i--)
        {
            if(a[i])
                v.push_back({max(0,i-a[i]+1),i});
        }
        for(int i=0; i<n; i++)
        {
            a[i]=0;
        }
        if(v.size()>0)
        {
            for(int j=v[0].first; j<=v[0].second; j++)
            {
                a[j]=1;
            }
        }
        for(int i=1; i<v.size(); i++)
        {
            int s=v[i].first, e=v[i].second, ps=v[i-1].first, pe=v[i-1].second;
            if(s<ps)
            {
                for(int j=s; j<=min(e,ps); j++)
                {
                    a[j]=1;
                }
            }
        }
        for(int i=0; i<n; i++)
        {
            cout<<a[i]<<" ";
        }
        cout<<'\n';
    }
    return 0;
}