#include<bits/stdc++.h>
#define ll long long
using namespace std;
int32_t main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--)
    {
        int n, ans=1;
        cin>>n;
        vector<int> a(n);
        for(int i=0; i<n; i++)
        {
            cin>>a[i];
        }
        sort(a.begin(),a.end());
        for(int i=0; i<n; i++)
        {
            if(i>0 && i<n-1 && a[i-1]==a[i] && a[i]==a[i+1])
                continue;
            ans++;
        }
        cout<<ans/2<<'\n';
    }
}