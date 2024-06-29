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
        ll n, ans=0;
        cin>>n;
        vector<int> a(n);
        map<int, int> m;
        for(int i=0; i<n; i++)
        {
            cin>>a[i];
            a[i]-=i;
            ans+=m[a[i]];
            m[a[i]]++;
        }
        cout<<ans<<'\n';
    }
    return 0;
}