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
        ll n, a, x, c=0, mx=INT_MAX, mn=INT_MIN;
        cin>>n;
        vector<ll> v;
        while(n--)
        {
            cin>>a>>x;
            if(a==1)
                mn=max(mn, x);
            else if(a==2)
                mx=min(mx, x);
            else
                v.push_back(x);
        }
        for(int i=0; i<v.size(); i++)
        {
            if(v[i]>=mn && v[i]<=mx)
                c++;
        }
        if(mx>=mn)
            cout<<mx-mn+1-c<<'\n';
        else
            cout<<"0\n";
    }
    return 0;
}