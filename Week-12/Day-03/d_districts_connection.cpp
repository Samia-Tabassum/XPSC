#include <bits/stdc++.h>
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
		int n, idx = -1;
		cin>>n;
		int a[n];
        vector<pair<int,int>> v;
		for(int i=0; i<n; i++)
        {
            cin>>a[i];
        }
		for(int i=1; i<n; i++)
        {
			if(a[i] != a[0])
            {
				idx=i;
				v.push_back({1,i+1});
			}
		}
        if(idx != -1)
        {
            for(int i=1; i<n; i++)
            {
                if(a[i]==a[0])
                    v.push_back({idx+1,i+1});
            }
            cout<<"YES\n";
            for(auto [x,y]:v)
                cout<<x<<" "<<y<<'\n';
        }
        else
            cout<<"NO\n";
	}
	return 0;
}