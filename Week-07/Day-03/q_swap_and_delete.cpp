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
        string s;
        cin>>s;
        int i, z=0, o=0, n=s.size(), ans;
        for(i=0; i<n; i++)
        {
            if(s[i]=='0')
                z++;
            else
                o++;
        }
        if(z==o)
            ans=0;
        else
        {
            for(i=0; i<n; i++)
            {
                if(s[i]=='0')
                {
                    if(o<=0)
                        break;
                    o--;
                }
                else
                {
                    if(z<=0)
                        break;
                    z--;
                }
            }
            ans=n-i;
        }
        cout<<ans<<'\n';
    }
    return 0;
}