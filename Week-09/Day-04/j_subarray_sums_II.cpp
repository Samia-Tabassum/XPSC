#include<bits/stdc++.h>
#define int long long
using namespace std;
int32_t main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int n, x, pre=0, ans=0;
    cin>>n>>x;
    vector<int> a(n);
    for(int i=0; i<n; i++)
    {
        cin>>a[i];
    }
	map<int,int> m;
	m[0]=1;
	for(int i=0; i<n; i++)
    {
		pre+=a[i];
		ans+=m[pre-x];
		m[pre]++;
	}
	cout<<ans<<'\n';
    return 0;
}