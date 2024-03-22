#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    ll x, y;
    cin>>x>>y;
    ll count=0;
    while (x <= y)
    {
        x *= 2;
        count++;
    }
    cout<<count<<'\n';
    return 0;
}