#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--)
    {
        int n, mx=INT_MIN;
        cin>>n;
        int a[n];
        map<int,int> m;
        for(int i=0; i<n; i++)
        {
            cin>>a[i];
            m[a[i]]++;
        }
        for(auto x:m)
        {
            mx=max(mx,x.second);
        }
        int ans=n-mx;
        while(mx<n)
        {
            mx*=2;
            ans++;
        }
        cout<<ans<<'\n';
    }
    return 0;
}