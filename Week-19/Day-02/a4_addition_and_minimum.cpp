#include <bits/stdc++.h>
#define ll long long
using namespace std;
const ll maxN=1e5+9, inf=1e18;
ll a[maxN], t[4*maxN], lazy[4*maxN];

void push(int n, int b, int e)
{
   if(lazy[n]==0)
      return;
   t[n]+=lazy[n];
   if(b != e)
   {
      int l=2*n, r=(2*n)+1;
      lazy[l]+=lazy[n];
      lazy[r]+=lazy[n];
   }
   lazy[n]=0;
}

void build(int n, int b, int e)
{
   if(b==e)
   {
      t[n]=a[b];
      return;
   }
   int mid=(b+e)/2, l=2*n, r=(2*n)+1;
   build(l, b, mid);
   build(r, mid+1, e);
   t[n]=min(t[l], t[r]);
}

void update(int n, int b, int e, int i, int j, int v)
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
   int mid=(b+e)/2, l=2*n, r=(2*n)+1;
   update(l, b, mid, i, j, v);
   update(r, mid+1, e, i, j, v);
   t[n] = min(t[l], t[r]);
}

ll query(int n, int b, int e, int i, int j)
{
   push(n, b, e);
   if(e<i || j<b)
      return inf;
   if(b>=i && e<=j)
      return t[n];
   int mid=(b+e)/2, l=2*n, r=(2*n)+1;
   return min(query(l, b, mid, i, j), query(r, mid+1, e, i, j));
}

int32_t main()
{
   ios_base::sync_with_stdio(false); cin.tie(NULL);
   int tc=1;
   //cin>>tc;
   while(tc--)
   {
      int n, m;
      cin>>n>>m;
      build(1, 1, n);
      while(m--)
      {
         int c;
         cin>>c;
         if(c==1)
         {
            int l, r, v;
            cin>>l>>r>>v;
            update(1, 1, n, l+1, r, v);
         }
         else
         {
            int l, r;
            cin>>l>>r;
            cout<<query(1, 1, n, l+1, r)<<'\n';
         }
      }
   }
   return 0;
}