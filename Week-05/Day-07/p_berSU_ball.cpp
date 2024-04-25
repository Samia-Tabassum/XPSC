#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int n, m, x, ans=0;
    vector<int> b, g;
    cin>>n;
    for(int i=0; i<n; i++)
    {
        cin>>x;
        b.push_back(x);
    }
    cin>>m;
    for(int i=0; i<m; i++)
    {
        cin>>x;
        g.push_back(x);
    }
    sort(b.begin(),b.end());
    sort(g.begin(),g.end());
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<m; j++)
        {
            if(abs(b[i]-g[j])<=1)
            {
                ans++;
                g[j]=105;
                break;
            }
        }
    }
    cout<<ans<<'\n';
    return 0;
}