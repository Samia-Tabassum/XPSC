#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int n, m, k, ans;
    cin>>n;
    vector<int> a(n), pre(n);
    for(int i=0; i<n; i++)
    {
        cin>>a[i];
    }
    pre[0]=a[0];
    for(int i=1; i<n; i++)
    {
        pre[i]=pre[i-1]+a[i];
    }
    cin>>m;
    while(m--)
    {
        cin>>k;
        ans=lower_bound(pre.begin(),pre.end(),k)-pre.begin()+1;
        cout<<ans<<'\n';
    }
    return 0;
}