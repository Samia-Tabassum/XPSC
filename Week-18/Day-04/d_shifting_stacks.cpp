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
        ll n, s=0, sum=0, f=1;
        cin>>n;
        ll a[n];
        for(int i=0; i<n; i++)
        {
            cin>>a[i];
            s+=a[i];
            sum+=i;
            if(sum>s)
                f=0;
        }
        if(f)
            cout<<"YES\n";
        else
            cout<<"NO\n";
    }
    return 0;
}