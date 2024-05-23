#include<bits/stdc++.h>
#define int long long
using namespace std;
int32_t main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int n, r=0, ans=0;
    cin>>n;
    vector<int> a(n);
    for(int i=0; i<n; i++)
    {
        cin>>a[i];
    }
	map<int,int> m;
    m[0]++;
    for(int i=0; i<n; i++)
    {
        r=((r+a[i])%n+n)%n;
        ans+=m[r];
        m[r]++;
    }
	cout<<ans<<'\n';
    return 0;
}