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
        int n, q, k, x, v=0, mx=INT_MIN;
        cin>>n>>q;
        vector<int> pre_sum(n), pre_max(n);
        for(int i=0; i<n; i++)
        {
            cin>>x;
            pre_sum[i]=x+v;
            v=pre_sum[i];
            mx=max(mx,x);
            pre_max[i]=mx;
        }
        while(q--)
        {
            cin>>k;
            int i=upper_bound(pre_max.begin(),pre_max.end(),k)-pre_max.begin()-1;
            if(i<0)
                cout<<"0 ";
            else
                cout<<pre_sum[i]<<" ";
        }
        cout<<'\n';
    }
    return 0;
}