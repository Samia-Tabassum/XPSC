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
        int n, k, ans=0;
        cin>>n>>k;
        int a[n];
        map<int, int> m;
        for(int i=0; i<n; i++)
        {
            cin>>a[i];
            for(int j=0; j<31; j++)
            {
                if(a[i]&(1<<j))
                    m[j]++;
            }
        }
        for(int i=30; i>=0; i--)
        {
            int x=n-m[i];
            if(x<=k)
            {
                k-=x;
                ans+=(1<<i);
            }
        }
        cout<<ans<<'\n';
    }
    return 0;
}