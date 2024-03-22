#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a, b, c, ans;
    cin>>a>>b>>c;
    for(int i=a; i<=b ;i++)
    {
        if(i%c==0)
        {
            ans=i;
            break;
        }
        // int x=c*i;
        // cout<<x<<'\n';
        // if(x<a)
        //     continue;
        // else if(x>=a && x<=b)
        // {
        //     ans=x;
        //     break;
        // }
        // else if(x>b)
        // {
        //     ans=-1;
        //     break;
        // }
        else
            ans=-1;
    }
    cout<<ans<<'\n';
    return 0;
}