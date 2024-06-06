#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--)
    {
        int n, ans=0;
        cin>>n;
        vector<ll> x(n), y(n), d(n);
        for(int i=0; i<n; i++)
        {
            cin>>x[i];
        }
        for(int i=0; i<n; i++)
        {
            cin>>y[i];
        }
        for(int i=0; i<n; i++)
        {
            d[i]=y[i]-x[i];
        }
        sort(d.begin(),d.end());
		int l=0, r=n-1;
		while(l<r)
        {
			if(d[l]+d[r]>=0)
            {
				ans++;
				r--;
			}
			l++;
		}
        cout<<ans<<'\n';
    }
    return 0;
}