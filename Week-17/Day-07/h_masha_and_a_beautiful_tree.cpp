#include<bits/stdc++.h>
#define ll long long
using namespace std;
int32_t main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL);
    int tc=1;
    cin>>tc;
    while(tc--)
    {
        ll n, ans=0, f=1;
        cin>>n;
        ll a[n];
        for(int i=0; i<n; i++)
        {
            cin>>a[i];
        }
        for(int i=0; i<19; i++)
        {
            ll p=(1<<i);
            ll l=0, r=p;
            while(r<n)
            {
                if(a[l]>a[r])
                {
                    ans++;
                    if(l+1==r)
                        swap(a[l], a[r]);
                    else
                    {
                        for(int j=l; j<r && r<n-1; j++)
                        {
                            swap(a[j], a[j+p]);
                        }
                    }
                }
                l=r+p;
                r=l+p;
            }
        }
        for(int i=0; i<n; i++)
        {
            if(a[i] != i+1)
            {
                f=0;
                break;
            }
        }
        if(f)
            cout<<ans<<'\n';
        else
            cout<<"-1\n";
    }
    return 0;
}