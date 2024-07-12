#include<bits/stdc++.h>
#define ll long long
using namespace std;
int32_t main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL);
    int t=1;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        vector<ll> a(n,0);
        if(n%2)
        {
            int j=1;
            for(int i=1; i<n; i+=2)
            {
                a[i]=j;
                j++;
            }
            j=1;
            for(int i=2; i<n; i+=2)
            {
                a[i]=j;
                j++;
            }
        }
        else
        {
            int j=1;
            for(int i=0; i<n; i+=2)
            {
                a[i]=j;
                j++;
            }
            j=1;
            for(int i=1; i<n; i+=2)
            {
                a[i]=j;
                j++;
            }
        }
        if(((n+1)/2)%2)
        {
            for(ll i=0; i<n-2; i+=2)
            {
                a[i] |= (1<<30);
            }
            for(ll i=2; i<n; i+=2)
            {
                a[i] |= (1<<29);
            }
        }
        else
        {
            for(ll i=0; i<n; i+=2)
            {
                a[i] |= (1<<30);
            }
        }
        for(ll i=0; i<n; i++)
        {
            cout<<a[i]<<" ";
        }
        cout<<'\n';
    }
    return 0;
}