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
        int n, c=0;
        cin>>n;
        int a[n];
        map<int,int> m;
        for(int i=0; i<n; i++)
        {
            cin>>a[i];
            m[a[i]]++;
        }
        for(int i=0; i<=n; i++)
        {
            if(m[i]==1)
                c++;
            if((c==2) || (m[i]==0))
            {
                cout<<i<<'\n';
                break;
            }
        }
    }
    return 0;
}