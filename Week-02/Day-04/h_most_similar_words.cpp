#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--)
    {
        int n, m, ans=INT_MAX, sum;
        cin>>n>>m;
        vector<string> s(n);
        for(int i=0; i<n; i++)
        {
            cin>>s[i];
        }
        for(int i=0; i<n-1; i++)
        {
            for(int j=i+1; j<n; j++)
            {
                sum=0;
                for(int k=0; k<m; k++)
                {
                    sum+=abs(s[i][k]-s[j][k]);
                }
                ans=min(sum,ans);
            }
        }
        cout<<ans<<'\n';
    }
    return 0;
}