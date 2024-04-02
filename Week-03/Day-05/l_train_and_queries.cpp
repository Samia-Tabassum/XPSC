#include<bits/stdc++.h>
#define ll long long
#define pr pair<int,int>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--)
    {
        int n, k, x, a, b;
        cin>>n>>k;
        map<int,int> m, o;
        for(int i=1; i<=n; i++)
        {
            cin>>x;
            if(m[x]==0)
                m[x]=i;
            else
                o[x]=i;
        }
        while(k--)
        {
            cin>>a>>b;
            if(m[a]>0 && (m[a]<m[b] || m[a]<o[b]))
                cout<<"YES\n";
            else
                cout<<"NO\n";
        }
    }
    return 0;
}