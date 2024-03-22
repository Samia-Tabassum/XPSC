#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int a, b, c, flag=0;
    cin>>a>>b>>c;
    for(int i=0; i<=10000; i+=a)
    {
        for(int j=0; j<=10000; j+=b)
        {
            if(i+j==c)
            {
                flag=1;
                break;
            }
        }
    }
    if(flag)
        cout<<"Yes\n";
    else
        cout<<"No\n";
    return 0;
}