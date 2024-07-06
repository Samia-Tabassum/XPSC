#include<bits/stdc++.h>
#define ll long long
using namespace std;
int32_t main()
{
    ios::sync_with_stdio(false); cin.tie(NULL);
    int t;
    cin>>t;
    while(t--)
    {
        ll x, y, k, r;
        cin>>x>>y>>k;
        while(x>1 && k)
        {
            r=y-(x%y);
            if(k-r>=0)
            {
                k-=r;
                x+=r;
            }
            else
            {
                x+=k;
                k=0;
            }
            while(x%y==0)
            {
                x/=y;
            }
        }
        if(k)
        {
            k%=(y-1);
            x+=k;
        }
        cout<<x<<'\n';
    }
    return 0;
}