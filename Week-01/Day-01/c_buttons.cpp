#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a, b;
    cin>>a>>b;
    int ans=0;
    for(int i=0; i<2; i++)
    {
        int x=max(a,b);
        ans+=x;
        if(x==a)
            a--;
        else
            b--;
    }
    cout<<ans<<'\n';
    return 0;
}