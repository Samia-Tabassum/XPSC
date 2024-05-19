#include<bits/stdc++.h>
#define int long long
using namespace std;
int32_t main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin>>n;
    int a[n];
    for(int i=0; i<n; i++)
    {
        cin>>a[i];
    }
    int mx=a[0], ans=0;
    for(int i=1; i<n; i++)
    {
        if(a[i]<mx)
        {
            ans+=(mx-a[i]);
            a[i]=mx;
        }
        else
        {
            mx=a[i];
        }
    }
    cout<<ans<<'\n';
    return 0;
}