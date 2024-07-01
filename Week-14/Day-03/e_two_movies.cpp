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
        int n, x=0, y=0, ans=INT_MAX;
        cin>>n;
        int a[n], b[n];
        for(int i=0; i<n; i++)
        {
            cin>>a[i];
        }
        for(int i=0; i<n; i++)
        {
            cin>>b[i];
        }
        for(int i=0; i<n; i++)
        {
            if(a[i]>b[i])
                x+=a[i];
            else if(a[i]<b[i])
                y+=b[i];
        }
        for(int i=0; i<n; i++)
        {
            if(a[i]==1 && b[i]==1)
            {
                if(x>y)
                    y++;
                else
                    x++;
            }
        }
        for(int i=0; i<n; i++)
        {
            if(a[i]==-1 && b[i]==-1)
            {
                if(x>y)
                    x--;
                else
                    y--;
            }
        }
        ans=min(x,y);
        cout<<ans<<'\n';
    }
    return 0;
}