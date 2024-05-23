#include<bits/stdc++.h>
#define int long long
using namespace std;
int32_t main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int y, x, a, b;
        cin>>y>>x;
        if(y>x)
        {
            a=(y-1)*(y-1);
            if(y%2)
                b=x;
            else
                b=(2*y)-x;
        }
        else
        {
            a=(x-1)*(x-1);
            if(x%2)
                b=(2*x)-y;
            else
                b=y;
        }
        cout<<a+b<<'\n';
    }
}