#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    ll t, a, b, n, s, x;
    cin>>t;
    while(t--)
    {
        cin>>a>>b>>n>>s;
        x=s%n;
        if((b>=x) && (a*n+b>=s))
            cout<<"YES\n";
        else
            cout<<"NO\n";
    }
    return 0;
}