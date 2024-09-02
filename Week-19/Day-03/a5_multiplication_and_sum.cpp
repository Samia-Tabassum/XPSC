#include <bits/stdc++.h>
#define ll long long
using namespace std;
const ll maxN=1e5+9, mod=1e9+7;
ll a[maxN], t[4*maxN], lazy[4*maxN];

void push(ll n, ll b, ll e)
{
    if(lazy[n]==1)
        return;
    t[n]=(t[n]*lazy[n])%mod;
    if(b != e)
    {
        ll l=2*n, r=(2*n)+1;
        lazy[l]=(lazy[l]*lazy[n])%mod;
        lazy[r]=(lazy[r]*lazy[n])%mod;
    }
    lazy[n]=1;
}

ll merge(ll l, ll r)
{
    return (l+r)%mod;
}

void build(ll n, ll b, ll e)
{
    lazy[n]=1;
    if(b==e)
    {
        t[n]=1;
        return;
    }
    ll mid=(b+e)/2, l=2*n, r=(2*n)+1;
    build(l, b, mid);
    build(r, mid+1, e);
    t[n]=merge(t[l], t[r]);
}

void update(ll n, ll b, ll e, ll i, ll j, ll v)
{
    push(n, b, e);
    if(e<i || j<b)
        return;
    if(b>=i && e<=j)
    {
        lazy[n]=v;
        push(n, b, e);
        return;
    }
    ll mid =(b+e)/2, l=2*n, r=(2*n)+1;
    update(l, b, mid, i, j, v);
    update(r, mid+1, e, i, j, v);
    t[n]=merge(t[l], t[r]);
}

ll query(ll n, ll b, ll e, ll i, ll j)
{
    push(n, b, e);
    if(e<i || j<b)
        return 0;
    if(b>=i && e<=j)
        return t[n];
    ll mid=(b+e)/2, l=2*n, r=(2*n)+1;
    return merge(query(l, b, mid, i, j), query(r, mid+1, e, i, j));
}

int32_t main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL);
    int tc=1;
    //cin>>tc;
    while(tc--)
    {
        ll n, m;
        cin>>n>>m;
        build(1, 1, n);
        while(m--)
        {
            ll c;
            cin>>c;
            if(c==1)
            {
                ll l, r, v;
                cin>>l>>r>>v;
                update(1, 1, n, l+1, r, v);
            }
            else
            {
                ll l, r;
                cin>>l>>r;
                cout<<query(1, 1, n, l+1, r)<<'\n';
            }
        }
    }
    return 0;
}