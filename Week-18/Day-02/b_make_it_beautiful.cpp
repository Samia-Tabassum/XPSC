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
        ll n;
        cin>>n;
        vector<ll> a(n);
        for(int i=0; i<n; i++)
        {
            cin>>a[i];
        }
        swap(a[0],a[1]);
        swap(a[0],a[n-1]);
        if(a[0]==a[1])
            cout<<"NO\n";
        else
        {
            cout<<"YES\n";
            for(int i=0; i<n; i++)
            {
                cout<<a[i]<<" ";
            }
            cout<<'\n';
        }
    }
    return 0;
}