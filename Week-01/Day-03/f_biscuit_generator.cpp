#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a, b, t, ans=0;
    cin>>a>>b>>t;
    for(int i=a; i<=(t+0.5); i+=a)
    {
        ans+=b;
    }
    cout<<ans<<'\n';
    return 0;
}