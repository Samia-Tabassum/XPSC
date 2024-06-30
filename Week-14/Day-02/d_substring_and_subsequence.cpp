#include<bits/stdc++.h>
#define ll long long
using namespace std;
int32_t main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--)
    {
        string a, b;
        cin>>a>>b;
        int n=a.size(), m=b.size(), ans=INT_MAX;
        for(int i=0; i<m; i++)
        {
            int j=i;
            for(char c:a)
            {
                if(j<m && c==b[j])
                    j++;
            }
            ans=min(ans,n+m+i-j);
        }
        cout<<ans<<'\n';
    }
    return 0;
}