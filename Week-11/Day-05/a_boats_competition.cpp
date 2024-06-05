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
		int n, ans=INT_MIN;
		cin>>n;
		vector<int> w(n);
		for(int i=0; i<n; i++)
        {
			cin>>w[i];
		}
		sort(w.begin(),w.end());
		for(int i=2; i<=2*n; i++)
        {
			int temp=0, l=0, r=n-1;
			while(l<r)
            {
				if(w[l]+w[r]==i)
                {
					temp++;
					l++;
					r--;
				}
				else if(w[l]+w[r]<i)
                    l++;
				else
					r--;
			}
            ans=max(ans,temp);
		}
		cout<<ans<<'\n';
	}
    return 0;
}