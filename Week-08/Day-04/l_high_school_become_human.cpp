#include<bits/stdc++.h>
#define int long long
using namespace std;
int32_t main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int x, y;
    double a, b;
    cin>>x>>y;
    a=y*log(x);
    b=x*log(y);
    if(x==y)
        cout<<"=\n";
    else if(a>b)
        cout<<">\n";
    else if(a<b)
        cout<<"<\n";
    else
        cout<<"=\n";
    return 0;
}