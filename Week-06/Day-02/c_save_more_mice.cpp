#include<bits/stdc++.h>
#define int long long
using namespace std;
int32_t main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--)
    {
        int n, k;
        cin>>n>>k;
        vector<int> x(k);
        for(int i=0; i<k; i++)
        {
            cin>>x[i];
        }
        sort(x.begin(),x.end(),greater<int>());
        x[0]=n-x[0];
        for(int i=1; i<k; i++)
        {
            x[i]=x[i-1]+n-x[i];
        }
        auto ans=lower_bound(x.begin(),x.end(),n)-x.begin();
        cout<<ans<<'\n';
    }
    return 0;
}