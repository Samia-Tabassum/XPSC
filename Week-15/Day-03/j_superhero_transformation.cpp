#include<bits/stdc++.h>
#define ll long long
using namespace std;
int32_t main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL);
    int t = 1;
    //cin>>t;
    while(t--)
    {
        string s, t;
        cin>>s>>t;
        if(s.size() != t.size())
        {
            cout<<"No\n";
            continue;
        }
        bool flag=true;
        for(int i=0; i<s.size(); i++)
        {
            if((s[i]=='a' || s[i]=='e' || s[i]=='i' || s[i]=='o' || s[i]=='u') && (t[i]!='a' && t[i]!='e' && t[i]!='i' && t[i]!='o' && t[i]!='u'))
            {
                flag=false;
                break;
            }
            else if((s[i]!='a' && s[i]!='e' && s[i]!='i' && s[i]!='o' && s[i]!='u') && (t[i]=='a' || t[i]=='e' || t[i]=='i' || t[i]=='o' || t[i]=='u'))
            {
                flag=false;
                break;
            }
        }
        if(flag)
            cout<<"Yes\n";
        else
            cout<<"No\n";
    }
    return 0;
}