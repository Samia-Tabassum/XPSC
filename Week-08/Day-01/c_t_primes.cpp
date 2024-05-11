#include <bits/stdc++.h>
#define int long long
using namespace std;
bool prime(int n)
{
    if(n==1)
        return false;
    for(int i=2; i*i<=n; i++)
    {
        if(n%i==0)
            return false;
    }
    return true;
}
bool perfectSquare(int n)
{
    int s=sqrtl(n);
    return (s*s)==n;
}
int32_t main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin>>n;
    int a[n];
    for(int i=0; i<n; i++)
    {
        cin>>a[i];
    }
    for(int i=0; i<n; i++)
    {
        if(prime(sqrtl(a[i])) && perfectSquare(a[i]))
            cout<<"YES\n";
        else
            cout<<"NO\n";
    }
    return 0;
}