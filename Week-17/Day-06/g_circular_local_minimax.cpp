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
        ll n, f=1;
		cin>>n;
        vector<ll> a(n), v;
		for(int i=0; i<n; i++)
        {
			cin>>a[i];
		}
		if(n%2)
        {
            cout<<"NO\n";
            continue;
        }
        sort(a.begin(),a.end());
        v.push_back(a[n-1]);
        for(int i=0; i<n/2; i++)
        {
            v.push_back(a[i]);
            v.push_back(a[(n/2)+i]);
        }
        v.push_back(a[0]);
        for(int i=1; i<=n; i++)
        {
            if((v[i]<v[i-1] && v[i]<v[i+1]) || (v[i]>v[i-1] && v[i]>v[i+1]))
                continue;
            else
            {
                f=0;
                break;
            }
        }
        if(f)
        {
            cout<<"YES\n";
            for(int i=1; i<=n; i++)
            {
                cout<<v[i]<<" ";
            }
            cout<<'\n';
        }
        else
            cout<<"NO\n";
	}
	return 0;
}			 			 		 			   	  		  				