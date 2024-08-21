#include<bits/stdc++.h>
#define ll long long
using namespace std;
const int maxN=1e5+9, inf=1e9+9;
int a[maxN];

struct node
{
    int mn, count;
};
node t[4*maxN];

node merge(node l, node r)
{
    node ans;
    ans.mn=min(l.mn, r.mn);
    ans.count=0;
    if(l.mn==ans.mn)
        ans.count+=l.count;
    if(r.mn==ans.mn)
        ans.count+=r.count;
    return ans;
}

void build(int n, int b, int e)
{
    if(b==e)
    {
        t[n].mn=a[b];
        t[n].count=1;
        return;
    }
    int mid=(b+e)/2, l=2*n, r=(2*n)+1;
    build(l, b, mid);
    build(r, mid+1, e);
    t[n]=merge(t[l], t[r]);
}

void update(int n, int b, int e, int i, int x)
{
    if(i<b || i>e)
        return;
    if(b==e)
    {
        t[n].mn=x;
        t[n].count=1;
        return;
    }
    int mid=(b+e)/2, l=2*n, r=(2*n)+1;
    update(l, b, mid, i, x);
    update(r, mid+1, e, i, x);
    t[n]=merge(t[l], t[r]);
}

node query(int n, int b, int e, int i, int j)
{
    if(e<i || j<b)
        return { inf,1 };
    if(b>=i && e<=j)
        return t[n];
    int mid=(b+e)/2, l=2*n, r=(2*n)+1;
    return merge(query(l, b, mid, i, j), query(r, mid+1, e, i, j));
}

int32_t main()
{
    ios::sync_with_stdio(false); cin.tie(NULL);
    int tc=1;
    //cin>>tc;
    while(tc--)
    {
        int n, m;
        cin>>n>>m;
        for (int i=1; i<=n; i++)
        {
            cin>>a[i];
        }
        build(1, 1, n);
        while(m--)
        {
            int c;
            cin>>c;
            if(c==1)
            {
                int i, v;
                cin>>i>>v;
                i++;
                update(1, 1, n, i, v);
            }
            else
            {
                int l, r;
                cin>>l>>r;
                l++;
                node ans=query(1, 1, n, l, r);
                cout<<ans.mn<<" "<<ans.count<<'\n';
            }
        }
    }
    return 0;
}