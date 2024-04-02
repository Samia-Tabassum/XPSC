#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--)
    {
        int n, x=INT_MIN, y=INT_MAX, z=INT_MIN, ans;
        cin>>n;
        int a[n];
        for(int i=0; i<n; i++)
        {
            cin>>a[i];
        }
        ans=a[n-1]-a[0];
        for(int i=1; i<n; i++)
        {
            x=max(x,a[i]);
        }
        ans=max(ans,(x-a[0]));
        for(int i=0; i<n-1; i++)
        {
            y=min(y,a[i]);
        }
        ans=max(ans,(a[n-1]-y));
        for(int i=1; i<n; i++)
        {
            z=max(z,(a[i-1]-a[i]));
        }
        ans=max(ans,z);
        if(n==1)
            cout<<"0\n";
        else
            cout<<ans<<'\n';
    }
    return 0;
}