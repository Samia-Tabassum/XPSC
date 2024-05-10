#include <bits/stdc++.h>
#define int long long
using namespace std;
int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--)
    {
        int n, m, x;
        cin>>n>>m>>x;
        vector<int> vis(n+1,0);
        vis[x-1]=1;
        while(m--)
        {
            int d;
            char c;
            cin>>d>>c;
            if(c=='?')
            {
                vector<int> q;
                for(int i=0; i<n; i++)
                {
                    if(vis[i])
                    {
                        q.push_back(i);
                        vis[i]=0;
                    }
                }
                for(int i : q)
                {
                    vis[(i+d)%n]=1;
                    vis[((i-d)%n+n)%n]=1;
                }
            }
            else if(c=='0')
            {
                vector<int> q;
                for (int i=0; i<n; i++)
                {
                    if(vis[i])
                    {
                        q.push_back(i);
                        vis[i]=0;
                    }
                }
                for(int i : q)
                {
                    vis[(i+d)%n]=1;
                }
            }
            else
            {
                vector<int> q;
                for (int i=0; i<n; i++)
                {
                    if(vis[i])
                    {
                        q.push_back(i);
                        vis[i]=0;
                    }
                }
                for(int i : q)
                {
                    vis[((i-d)%n+n)%n]=1;
                }
            }
        }  
        int ans=0;
        for(int i=0; i<=n; i++)
        {
            ans+=(vis[i]==1);
        }
        cout<<ans<<'\n';
        for(int i=0; i<n; i++)
        {
            if(vis[i])
                cout<<i+1<<" ";
        }
        cout<<'\n';
    }
    return 0;
}