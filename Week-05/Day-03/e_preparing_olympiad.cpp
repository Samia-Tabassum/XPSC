#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int n, l, r, x, ans=0;
    cin>>n>>l>>r>>x;
    int c[n];
    for(int i=0; i<n; i++)
    {
        cin>>c[i];
    }
    for(int i=0; i<(1<<n); i++)
    {
        int sz=0, mx=INT_MIN, mn=INT_MAX;
        long long s=0;
        for(int j=0; j<n; j++)
        {
            if((i>>j)&1)
            {
                s+=c[j];
                mx=max(mx,c[j]);
                mn=min(mn,c[j]);
                sz++;
            }
        }
        if(sz>1 && s>=l && s<=r && (mx-mn)>=x)
        {
            ans++;
        }
    }
    cout<<ans<<'\n';
    return 0;
}