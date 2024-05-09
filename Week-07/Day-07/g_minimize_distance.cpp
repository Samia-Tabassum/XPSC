#include <bits/stdc++.h>
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
        int n, k, v;
        cin>>n>>k;
        vector<int> a, b;
        for(int i=0; i<n; i++)
        {
            cin>>v;
            if(v>0)
                a.push_back(v);
            else
                b.push_back(v*(-1));
        }
        sort(a.begin(),a.end());
        sort(b.begin(),b.end());
        int p=a.size(), q=b.size(), ans=0, x=0, y=0;
        if(p>0)
        {
            if(p<k)
            {
                x=a[p-1];
                ans+=x;
            }
            else
            {
                x=a[p-1];
                for(int i=0; i<p; i++)
                {
                    if(i==p-1)
                    {
                        ans+=a[i];
                    }
                    else if((p-i-1)%k==0)
                    {
                        ans+=a[i]*2;
                    }
                }
            }
        }
        if(q>0)
        {
            if(q<k)
            {
                y=b[q-1];
                ans+=y;
            }
            else
            {
                y=b[q-1];
                for(int i=0; i<q; i++)
                {
                    if(i==q-1)
                    {
                        ans+=b[i];
                    }
                    else if((q-i-1)%k==0)
                    {
                        ans+=b[i]*2;
                    }
                }
            }
        }
        ans+=min(x,y);
        cout<<ans<<'\n';
    }
    return 0;
}