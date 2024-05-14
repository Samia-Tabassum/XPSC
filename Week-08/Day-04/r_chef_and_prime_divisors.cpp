#include<bits/stdc++.h>
#define int long long
using namespace std;
int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--)
    {
        int a, b;
        cin>>a>>b;
        while(true)
        {
            if(__gcd(a,b)==1)
                break;
            b/=__gcd(a,b);
        }
        if(b==1)
            cout<<"Yes\n";
        else
            cout<<"No\n";
    }
}