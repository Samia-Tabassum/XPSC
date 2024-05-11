#include<bits/stdc++.h>
#define int long long
using namespace std;
int lcm(int a, int b)
{
    return (a*b)/__gcd(a,b);
}
int32_t main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int x, a;
    cin>>x;
    for(int i=1; i*i<=x; i++)
    {
        if(x%i==0 && lcm(i,x/i)==x)
        {
            a=i;
        }
    }
    cout<<a<<" "<<x/a<<'\n';
    return 0;
}