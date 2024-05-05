#include<bits/stdc++.h>
#define int long long
using namespace std;
int32_t main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin>>n;
    string a="aa", b="bb", c;
    for(int i=1; i<=n/2 + 1; i++)
    {
        if(i%2)
            c+=a;
        else
            c+=b;
    }
    if(n%2)
    {
        for(int i=0; i<c.size()-1; i++)
            cout<<c[i];
    }
    else
    {
        for(int i=0; i<c.size()-2; i++)
            cout<<c[i];
    }
    cout<<'\n';
    return 0;
}