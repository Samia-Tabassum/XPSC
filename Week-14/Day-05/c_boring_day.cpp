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
        ll n, l, r;
        cin>>n>>l>>r;
        ll a[n];
        for(ll i=0; i<n; i++)
        {
            cin>>a[i];
        }
        ll i=0, j=0, ans=0, sum=0;
        while(j<n)
        {
            sum+=a[j];
            if(sum>=l && sum<=r)
            {
                ans++;
                sum=0;
                i=j+1;
            }
            else if(sum>r)
            {
                while(sum>r)
                {
                    sum-=a[i];
                    i++;
                }
                if(sum>=l && sum<=r)
                {
                    ans++;
                    sum=0;
                    i=j+1;
                }
            }
            j++;
        }
        cout<<ans<<'\n';
    }
    return 0;
}