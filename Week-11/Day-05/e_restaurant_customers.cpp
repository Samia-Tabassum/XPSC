#include<bits/stdc++.h>
#define ll long long
using namespace std;
int32_t main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int n, a, b, c=0, ans=0;
    cin>>n;
	vector<pair<int,int>> v;
	for(int i=0; i<n; i++)
    {
		cin>>a>>b;
		v.push_back({a,1});
		v.push_back({b,-1});
	}
	sort(v.begin(), v.end());
	for(auto [x,y] : v)
    {
		c+=y;
		ans=max(ans,c);
	}
	cout<<ans<<'\n';
    return 0;
}