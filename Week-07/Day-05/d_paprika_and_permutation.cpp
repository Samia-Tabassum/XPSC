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

        int n, x;
        cin>>n;
        vector<int> a, b, v(n+1);
        for(int i=0; i<=n; i++)
        {
            v[i]=0;
        }
        for(int i=0; i<n; i++)
        {
            cin>>x;
            if(x<=n)
            {
                if(v[x]==0)
                    v[x]=1;
                else
                    b.push_back(x);
            }
            else
            {
                b.push_back(x);
            }
        }
        for(int i=1; i<=n; i++)
        {
            if(v[i]==0)
                a.push_back(i);
        }
        sort(b.begin(), b.end());
        int sz=b.size();
        bool flag=true;
        for(int i=0; i<sz; i++)
        {
            if(2*a[i]>=b[i])
            {
                flag=false;
                break;
            }
        }
        if(flag)
            cout<<sz<<'\n';
        else
            cout<<"-1\n";
    }
    return 0;
}