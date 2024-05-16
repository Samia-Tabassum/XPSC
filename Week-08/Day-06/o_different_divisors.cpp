#include<bits/stdc++.h>
#define int long long
using namespace std;
bool prime(int n)
{
    for(int i=2; i*i<=n; i++)
    {
        if(n%i==0)
            return false;
    }
    return true;
}
int32_t main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--)
    {
        int n, x, y, ans;
        cin>>n;
        x=n+1;
        while(!prime(x))
        {
            x++;
        }
        y=n+x;
        while(!prime(y))
        {
            y++;
        }
        ans=x*y;
        cout<<ans<<'\n';
    }
    return 0;
}