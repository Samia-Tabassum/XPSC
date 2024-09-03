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
        ll n, ans=0;
        string s;
        cin>>n>>s;
        for(int i=0; i<n-2; i++)
        {
            if(i<n-4)
            {
                if(s[i]=='m' && s[i+1]=='a' && s[i+2]=='p' && s[i+3]=='i' && s[i+4]=='e')
                {
                    ans++;
                    i+=3;
                    continue;
                }
            }
            if(s[i]=='m' && s[i+1]=='a' && s[i+2]=='p')
                ans++;
            if(s[i]=='p' && s[i+1]=='i' && s[i+2]=='e')
                ans++;
        }
        cout<<ans<<'\n';
    }
    return 0;
}