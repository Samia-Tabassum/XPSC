#include<bits/stdc++.h>
#define ll long long
using  namespace  std;
int32_t main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    ll t;
    cin>>t;
    while(t--)
    {
        ll n, w=0;
        cin>>n;
        vector<ll> a(n), b;
        map<ll, ll> m;      
        for(ll i=0; i<n; i++)
        {
            cin>>a[i];
            w+=a[i];
            m[a[i]]++;
        }
        sort(a.begin(),a.end());
        priority_queue<ll> p;
        p.push(w);
        for(ll i=0; i<n-1; i++)
        {
            while(!p.empty() && m[p.top()] != 0)
            {
                b.push_back(p.top());
                m[p.top()]--;
                p.pop();
            }
            if(!p.empty())
            {
                ll x=p.top();
                p.pop();
                if(x%2)
                {
                    p.push(x/2);
                    p.push((x/2)+1);
                }
                else
                {
                    p.push(x/2);
                    p.push(x/2);
                }
            }
        }
        while(!p.empty() && m[p.top()] != 0)
        {
            b.push_back(p.top());
            m[p.top()]--;
            p.pop();
        }          
        sort(b.begin(),b.end());
        if(a==b)
            cout<<"YES\n";
        else
            cout<<"NO\n";
    }
    return 0;
}