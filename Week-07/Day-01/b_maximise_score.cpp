#include<bits/stdc++.h>
#define int long long
using namespace std;
int32_t main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        vector<int> a(n), diff(n);
        for(int i=0; i<n; i++)
        {
            cin>>a[i];
        }
        for(int i=1; i<n-1; i++)
        {
            diff[i]=max(abs(a[i]-a[i+1]),abs(a[i]-a[i-1]));
        }
        diff[0]=abs(a[0]-a[1]);
        diff[n-1]=abs(a[n-1]-a[n-2]);
        sort(diff.begin(),diff.end());
        cout<<diff[0]<<'\n';
    }
    return 0;
}