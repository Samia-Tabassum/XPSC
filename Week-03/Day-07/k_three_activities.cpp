#include<bits/stdc++.h>
#define ll long long
#define pr pair<ll, ll>
using namespace std;
bool cmp(pr a, pr b)
{
    if(a.first==b.first)
        return a.second<b.second;
    return a.first>b.first;
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    ll t;
    cin>>t;
    while(t--)
    {
        ll n, x, i, j, k;
        cin>>n;
        ll ans=INT_MIN;
        vector<pr> a, b, c;
        for(i=0; i<n; i++)
        {
            cin>>x;
            a.push_back({x,i});
        }
        for(i=0; i<n; i++)
        {
            cin>>x;
            b.push_back({x,i});
        }
        for(i=0; i<n; i++)
        {
            cin>>x;
            c.push_back({x,i});
        }
        sort(a.begin(),a.end(),cmp);
        sort(b.begin(),b.end(),cmp);
        sort(c.begin(),c.end(),cmp);
        for(i=0; i<3; i++)
        {
            for(j=0; j<3; j++)
            {
                for(k=0; k<3; k++)
                {
                    if(a[i].second != b[j].second && b[j].second != c[k].second && a[i].second != c[k].second)
                        ans=max(ans,(a[i].first+b[j].first+c[k].first));
                }
            }
        }
        cout<<ans<<'\n';
    }
    return 0;
}