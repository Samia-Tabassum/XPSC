#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        ll a[n+1];
        ll s=0, ans=0;
        for(int i=1; i<=n; i++)
        {
            cin>>a[i];
            if(a[i]>0)
                s+=a[i];
        }
        for(int i=1; i<=n; i++)
        {
            if(i%2)
            {
                if(a[i]>0)
                {
                    ans=max(ans,s);
                    s-=a[i];
                }
                else
                {
                    ans=max(ans,s+a[i]);
                }
            }
            else
            {
                if(a[i]>0)
                    s-=a[i];
                ans=max(ans,s);
            }
        }
        cout<<ans<<'\n';
    }
    return 0;
}