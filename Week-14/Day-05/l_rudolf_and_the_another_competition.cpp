#include<bits/stdc++.h>
#define ll long long
using namespace std;
int32_t main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--)
    {
        ll n, m, h, p=1, x;
        cin>>n>>m>>h;
        vector<ll> a[n];
        for(int i=0; i<n; i++)
        {
            for(int j=0; j<m; j++)
            {
                cin>>x;
                a[i].push_back(x);
            }
        }
        for(int i=0; i<n; i++)
        {
            sort(a[i].begin(),a[i].end());
        }
        vector<pair<ll, ll>> v(n);
        for(int i=0; i<n; i++)
        {
            v[i].first=0;
            v[i].second=0;
        }
        ll tmp=0;
        for(int i=0; i<m; i++)
        {
            tmp+=a[0][i];
            if(tmp<=h)
            {
                v[0].first++;
                v[0].second+=tmp;
            }
            else
                break;
        }
        for(int i=1; i<n; i++)
        {
            tmp=0;
            for(int j=0; j<m; j++)
            {
                tmp+=a[i][j];
                if(tmp<=h)
                {
                    v[i].first++;
                    v[i].second+=tmp;
                }
                else
                    break;
            }
        }
        for(int i=1; i<n; i++)
        {
            if(v[0].first<v[i].first)
                p++;
            else if((v[0].first==v[i].first) && (v[0].second>v[i].second))
                p++;
        }
        cout<<p<<'\n';
    }
    return 0;
}