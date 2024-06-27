#include<bits/stdc++.h>
#define ll long long
using namespace std;
int32_t main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--)
    {
        int x, n, m;
        cin>>x>>n>>m;
        if(x<=10*m)
            cout<<"YES\n";
        else
        {
            for(int i=0; i<n; i++)
            {
                x=floor((double)x/2)+10;
            }
            if(x<=10*m)
                cout<<"YES\n";
            else
                cout<<"NO\n";
        }
    }
    return 0;
}