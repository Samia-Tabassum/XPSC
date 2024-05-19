#include<bits/stdc++.h>
#define int long long
using namespace std;
int32_t main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int n, m, x;
    cin>>n>>m;
    vector<int> t(m), ans(m);
    multiset<int> ms;
    for(int i=0; i<n; i++)
    {
        cin>>x;
        ms.insert(x);
    }
    for(int i=0; i<m; i++)
    {
        cin>>t[i];
    }
    for(int i=0; i<m; i++)
    {
        auto it=ms.upper_bound(t[i]);
        if(it==ms.begin())
        {
            ans[i]=-1;
        }
        else
        {
            it--;
            ans[i]=*it;
            ms.erase(it);
        }
    }
    for(int i=0; i<m; i++)
    {
        cout<<ans[i]<<'\n';
    }
    return 0;
}