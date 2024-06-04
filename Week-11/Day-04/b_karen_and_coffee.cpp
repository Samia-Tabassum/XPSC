#include<bits/stdc++.h>
#define ll long long
using namespace std;
const int N=2e5+5;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    vector<int> v(N);
    int n, k, q, l, r, a, b;
    cin>>n>>k>>q;
    for(int i=0; i<n; i++)
    {
        cin>>l>>r;
        v[l]++;
        v[r+1]--;
    }
    for(int i=1; i<N; i++)
    {
        v[i]+=v[i-1];
    }
    for(int i=0; i<N; i++)
    {
        v[i]=(v[i]>=k?1:0);
    }
    for(int i=1; i<N; i++)
    {
        v[i]+=v[i-1];
    }
    for(int i=0; i<q; i++)
    {
        cin>>a>>b;
        cout<<v[b]-v[a-1]<<'\n';
    }
    return 0;
}