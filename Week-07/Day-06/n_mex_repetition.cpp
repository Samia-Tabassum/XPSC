#include <bits/stdc++.h>
#define int long long
using namespace std;
int32_t main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n, k;
        cin>>n>>k;
        int sum=n*(n+1)/2, s=0;
        vector<int> a(n+1);
        for(int i=0; i<n; i++)
        {
            cin>>a[i];
            s+=a[i];
        }
        a[n]=sum-s;
        k%=(n+1);
        for(int i=0; i<n; i++)
        {
            cout<<a[(i+n+1-k)%(n+1)]<<" ";
        }
        cout<<'\n';
    }
}