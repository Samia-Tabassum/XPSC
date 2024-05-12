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
int32_t main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin>>n;
    if(prime(n))
        cout<<"1\n";
    else if(n%2==0)
        cout<<"2\n";
    else
    {
        if(prime(n-2))
            cout<<"2\n";
        else
            cout<<"3\n";
    }
    return 0;
}