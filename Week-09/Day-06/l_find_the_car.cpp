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
        int n, k, q, d, ans;
        cin>>n>>k>>q;
        vector<int> a(k+1,0), b(k+1,0);
        for(int i=1; i<=k; i++)
        {
            cin>>a[i];
        }
        for(int i=1; i<=k; i++)
        {
            cin>>b[i];
        }
        while(q--)
        {
            cin>>d;
            auto it=lower_bound(a.begin(),a.end(),d)-a.begin();
            if(a[it]==d)
                ans=b[it];
            else
            {
                it--;
                ans=b[it]+(d-a[it])*(b[it+1]-b[it])/(a[it+1]-a[it]);
            }
            cout<<ans<<" ";
        }
        cout<<'\n';
    }
    return 0;
}