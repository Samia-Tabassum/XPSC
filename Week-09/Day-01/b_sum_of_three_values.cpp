#include<bits/stdc++.h>
#define int long long
using namespace std;
int32_t main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int n, x;
    cin>>n>>x;
    vector<int> a(n), t(n), ans(3), aa;
    for(int i=0; i<n; i++)
    {
        cin>>a[i];
        t[i]=a[i];
    }
    sort(a.begin(),a.end());
    bool flag=false;
    for(int i=0; i<n; i++)
    {
        int r=x-a[i];
        for(int j=i+1; j<n; j++)
        {
            if(a[j]<r)
            {
                int rr=r-a[j];
                int l=j+1, r=n-1, mid;
                while(l<=r)
                {
                    mid=(l+r)/2;
                    if(a[mid]==rr)
                    {
                        flag=true;
                        ans[0]=a[i], ans[1]=a[j], ans[2]=a[mid];
                        break;
                    }
                    else if(a[mid]<rr)
                    {
                        l=mid+1;
                    }
                    else
                    {
                        r=mid-1;
                    }
                }
            }
        }
    }
    if(flag)
    {
        for(int i=0; i<n; i++)
        {
            if(t[i]==ans[0])
            {
                aa.push_back(i+1);
                ans[0]=1e9+5;
            }
            else if(t[i]==ans[1])
            {
                aa.push_back(i+1);
                ans[1]=1e9+5;
            }
            else if(t[i]==ans[2])
            {
                aa.push_back(i+1);
                ans[2]=1e9+5;
            }
        }
        for(int i=0; i<3; i++)
        {
            cout<<aa[i]<<" ";
        }
        cout<<'\n';
    }
    else
        cout<<"IMPOSSIBLE\n";
    return 0;
}