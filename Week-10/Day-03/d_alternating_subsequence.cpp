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
        int n, ans=0;
        cin>>n;
        vector<int> a(n), v;
        for(int i=0; i<n; i++)
        {
            cin>>a[i];
        }
        for(int i=0; i<n; i++)
        {
            if(v.empty())
                v.push_back(a[i]);
            else if((v.back()<0 && a[i]>0) || (v.back()>0 && a[i]<0))
                v.push_back(a[i]);
            else if((v.back()<0 && a[i]<0 && v.back()<a[i]) || v.back()>0 && a[i]>0 && v.back()<a[i])
            {
                v.pop_back();
                v.push_back(a[i]);
            }
        }
        for(int i=0; i<v.size(); i++)
        {
            ans+=v[i];
        }
        cout<<ans<<'\n';
    }
    return 0;
}