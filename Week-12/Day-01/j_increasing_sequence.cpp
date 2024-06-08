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
        vector<int> a(n), b(n);
        for(int i=0; i<n; i++)
        {
            cin>>a[i];
        }
        if(a[0] != 1)
            b[0]=1;
        else
            b[0]=a[0]+1;
        for(int i=1; i<n; i++)
        {
            if(b[i-1]+1 != a[i])
                b[i]=b[i-1]+1;
            else
                b[i]=a[i]+1;
        }
        cout<<b[n-1]<<'\n';
    }
    return 0;
}