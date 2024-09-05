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
        ll n, c=0;
        string s;
        cin>>n>>s;
        for(int i=0; i<n; i++)
        {
            if(s[i]=='0')
                c++;
        }
        if(c)
            cout<<"YES\n";
        else
            cout<<"NO\n";
    }
    return 0;
}