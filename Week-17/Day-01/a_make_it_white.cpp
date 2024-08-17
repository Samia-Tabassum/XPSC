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
        ll n, l, r;
        string s;
        cin>>n>>s;
        for(int i=0; i<n; i++)
        {
            if(s[i]=='B')
            {
                l=i;
                break;
            }
        }
        for(int i=n-1; i>=0; i--)
        {
            if(s[i]=='B')
            {
                r=i;
                break;
            }
        }
        cout<<r-l+1<<'\n';
    }
    return 0;
}