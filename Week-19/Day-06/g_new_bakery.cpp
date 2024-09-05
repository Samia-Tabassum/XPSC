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
        ll n, a, b, k;
        cin>>n>>a>>b;
        k=min(b-a+1, n);
        if(a>=b)
            cout<<n*a<<'\n';
        else
            cout<<n*(b-k+1)+(k*(k-1))/2<<'\n';
    }
    return 0;
}