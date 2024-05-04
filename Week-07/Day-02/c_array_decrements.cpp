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
        int n, diff=INT_MAX;
        cin>>n;
        vector<int> a(n), b(n), dif(n);
        for(int i=0; i<n; i++)
        {
            cin>>a[i];
        }
        for(int i=0; i<n; i++)
        {
            cin>>b[i];
        }
        for(int i=0; i<n; i++)
        {
            if(b[i]!=0)
                diff=min(diff,a[i]-b[i]);
        }
        bool flag=true;
        if(diff<0)
        {
            cout<<"No\n";
            continue;
        }
        for(int i=0; i<n; i++)
        {
            if(a[i]-b[i]>diff)
            {
                flag=false;
                break;
            }
            if(b[i]==0 && a[i]-b[i]>diff)
            {
                flag=false;
                break;
            }
        }
        if(flag)
            cout<<"Yes\n";
        else
            cout<<"No\n";
    }
    return 0;
}