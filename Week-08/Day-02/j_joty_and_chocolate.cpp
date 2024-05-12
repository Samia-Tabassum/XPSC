#include <bits/stdc++.h>
#define int long long
using namespace std;
int lcm(int a, int b)
{
    return ((a*b)/__gcd(a,b));
}
int32_t main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int n, a, b, p, q, overlap, ans=0;
    cin>>n>>a>>b>>p>>q;
    overlap=(n/lcm(a,b));
    ans+=((p*(n/a))+(q*(n/b))+(overlap*max(p,q))-(overlap*(p+q)));
    cout<<ans<<'\n';
    return 0;
}