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
        int n, k, d, w, r=0, e=-1, ans=0;
        cin>>n>>k>>d>>w;
        int a[n];
        for(int i=0; i<n; i++)
        {
            cin>>a[i];
            if(e<a[i] || r<=0)
            {
                ans++;
                r=k-1;
                e=a[i]+w+d;
            }
            else
                r--;
        }
        cout<<ans<<'\n';
    }
    return 0;
}