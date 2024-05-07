#include<bits/stdc++.h>
#define int long long
using namespace std;
int32_t main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--)
    {
        int n, ans=0;
        cin>>n;
        int a[n];
        map<int,int> m;
        for(int i=0; i<n; i++)
        {
            cin>>a[i];
            if(a[i]<=n)
                m[a[i]]++;
        }
        for(int i=1; i<=n; i++)
        {
            int cur=0;
            for(int j=1; j*j<=i; j++)
            {
                if(i%j==0)
                {
                    cur+=m[j];
                    if(j*j != i)
                    {
                        cur+=m[i/j];
                    }
                }
            }
            ans=max(ans,cur);
        }
        cout<<ans<<'\n';
    }
    return 0;
}