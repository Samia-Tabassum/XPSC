#include<bits/stdc++.h>
#define ll long long
using namespace std;
int32_t main()
{    
    ios_base::sync_with_stdio(false); cin.tie(NULL);
    int tc=1;
    cin>>tc;
    while(tc--)
    {
        ll n;
        cin>>n;
        if(n==1)
            cout<<"1\n";
        else if(n==2)
            cout<<"1 2\n";
        else if(n==3)
            cout<<"2 1 3\n";
        else if(n==4)
            cout<<"2 4 1 3\n";
        else
        {
            ll x=(n-3)/2+3;
            cout<<"2 ";
            for(int i=4; i<=n; i++)
            {
                cout<<i<<" ";
                if(i==x)
                    cout<<"1 ";
            }
            cout<<"3\n";
        }
    }
    return 0;
}