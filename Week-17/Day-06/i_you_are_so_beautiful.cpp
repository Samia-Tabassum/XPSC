#include <bits/stdc++.h>
#define ll long long
using namespace std;
int32_t main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL);
	int tc=1;
	cin>>tc;
	while(tc--)
    {
		ll n, c=0, ans=0;
        cin>>n;
        ll a[n];
        for(int i=0; i<n; i++)
        {
            cin>>a[i];
        }
        map<ll,ll> m;
        set<ll> s, f, l;
        for(int i=0; i<n; i++)
        {
            if(s.count(a[i])==0)
                f.insert(i);
            s.insert(a[i]);
            m[a[i]]=i;
        }
        for(auto [x,y]:m)
        {
            l.insert(y);
        }
        for(int i=n-1; i>=0; i--)
        {
            if(l.count(i))
                c++;
            if(f.count(i))
                ans+=c;
        }
        cout<<ans<<'\n';
	}
	return 0;
}