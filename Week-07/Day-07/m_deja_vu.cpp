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
        int n, q, v;
        cin>>n>>q;
        vector<int> a(n), x;
        for(int i=0; i<n; i++)
        {
            cin>>a[i];
        }
        for(int i=0; i<q; i++)
        {
            cin>>v;
            if(x.size()==0 || v<x.back())
                x.push_back(v);
        }
        for(int i=0; i<n; i++)
        {
            for(int j:x)
            {
                if(a[i]%(1<<j)==0)
                {
                    j--;
                    a[i]+=(1<<j);
                }
            }
        }
        for(int i=0; i<n; i++)
        {
            cout<<a[i]<<" ";
        }
        cout<<'\n';
    }
    return 0;
}