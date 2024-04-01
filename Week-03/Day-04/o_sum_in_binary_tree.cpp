#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        ll n, sum=0;
        cin>>n;
        while(n!=0)
        {
            sum+=n;
            n/=2;
        }
        cout<<sum<<'\n';
    }
    return 0;
}