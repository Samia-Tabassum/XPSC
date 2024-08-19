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
        ll n, k, c=0, f=0;
        cin>>n>>k;
        ll a[n];
        for(int i=0; i<n; i++)
        {
            cin>>a[i];
        }
        if(a[0]==a[n-1])
        {
            for(int i=0; i<n; i++)
            {
                if(a[i]==a[0])
                    c++;
                if(c==k)
                {
                    f=1;
                    break;
                }
            }
        }
        else
        {
            ll j=n;
            for(int i=0; i<n; i++)
            {
                if(a[i]==a[0])
                    c++;
                if(c==k)
                {
                    j=i;
                    c=0;
                    break;
                }
            }
            for(int i=j+1; i<n; i++)
            {
                if(a[i]==a[n-1])
                    c++;
                if(c==k)
                {
                    f=1;
                    break;
                }
            }
        }
        if(f)
            cout<<"YES\n";
        else
            cout<<"NO\n";
    }
    return 0;
}