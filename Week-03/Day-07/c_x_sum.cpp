#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    ll t;
    cin>>t;
    while(t--)
    {
        ll n, m, ans=INT_MIN, i, j, x, y, sum=0;
        cin>>n>>m;
        ll a[n][m];
        for(i=0; i<n; i++)
        {
            for(j=0; j<m; j++)
                cin>>a[i][j];
        }
        for(i=0; i<n; i++)
        {
            for(j=0; j<m; j++)
            {
                sum=a[i][j];
                x=i+1, y=j+1;
                while(x<n && y<m)
                {
                    sum+=a[x][y];
                    x++, y++;
                }
                x=i-1, y=j+1;
                while(x>=0 && y<m)
                {
                    sum+=a[x][y];
                    x--, y++;
                }
                x=i+1, y=j-1;
                while(x<n && y>=0)
                {
                    sum+=a[x][y];
                    x++, y--;
                }
                x=i-1, y=j-1;
                while(x>=0 && y>=0)
                {
                    sum+=a[x][y];
                    x--, y--;
                }
                ans=max(ans,sum);
            }
        }
        cout<<ans<<'\n';
    }
    return 0;
}