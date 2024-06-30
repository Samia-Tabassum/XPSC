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
        int n, ans=INT_MAX;
        string s;
        cin>>n>>s;
        bool f1=false;
        for(int i=0; i<n-1; i++)
        {
            int x=(s[i]-'0')*10+(s[i+1]-'0'), y=0;
            if(x==0)
            {
                f1=true;
                break;
            }
            for(int j=i+2; j<n; j++)
            {
                if(s[j]=='0')
                {
                    f1=true;
                    break;
                }
                if(s[j]!='1')
                    y+=(s[j]-'0');
            }
            for(int j=i-1; j>=0; j--)
            {
                if(s[j]=='0')
                {
                    f1=true;
                    break;
                }
                if(s[j]!='1')
                    y+=(s[j]-'0');
            }
            if(x==1 && y>0)
                x=y;
            else
                x+=y;
            ans=min(ans,x);
        }
        if(f1)
            cout<<"0\n";
        else
            cout<<ans<<'\n';
    }
    return 0;
}