#include<bits/stdc++.h>
#define ll long long
using namespace std;
int32_t main()
{
	ios_base::sync_with_stdio(false); cin.tie(NULL);
	int tc=1;
	cin>>tc;
	while(tc--)
	{
		ll n, ans=0, mx=0, x=0;
        cin>>n;
        ll a[n];
        for(int i=0; i<n; i++)
        {
            cin>>a[i];
            ans+=a[i];
        }
        map<ll, ll> m, mp;
        for(int i=0; i<n; i++)
        {
            m[a[i]]++;
            if(m[a[i]]>1)
                mx=max(mx,a[i]);
            a[i]=mx;
            mp[a[i]]++;
        }
        for(int i=0; i<n; i++)
        {
            if(a[i])
            {
                if(mp[a[i]] != 1)
                    x=a[i];
                ans+=(a[i]+(n-1-i)*x);
            }
        }
        cout<<ans<<'\n';
	}
	return 0;
}