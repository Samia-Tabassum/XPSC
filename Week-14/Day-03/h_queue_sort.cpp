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
        int n, mn=INT_MAX, ans=-1;
        cin>>n;
        int a[n];
        for(int i=0; i<n; i++)
        {
            cin>>a[i];
            if(a[i]<mn)
            {
                mn=a[i];
                ans=i;
            }
        }
        for(int i=ans; i<n-1; i++)
        {
            if(a[i]>a[i+1])
            {
                ans=-1;
                break;
            }
        }
        cout<<ans<<'\n';
    }
    return 0;
}