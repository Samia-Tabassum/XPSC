#include<bits/stdc++.h>
#define int long long
using namespace std;
int32_t main ()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--) 
    {
        int n, ans=-1;
        cin>>n;
        int a[n+1];
        map<int,int> m;
        for(int i=1; i<=n; i++)
        {
            cin>>a[i];
            m[a[i]]=i;
        }
        for(int i=1; i<=1000; i++)
        {
            if(m[i]>0)
            {
                for(int j=1; j<=1000; j++)
                {
                    if(m[j]>0)
                    {
                        if(__gcd(i,j)==1)
                        {
                            ans=max(ans,m[i]+m[j]);
                        }
                    }
                }
            }
        }
        cout<<ans<<'\n';
    }
    return 0;
}