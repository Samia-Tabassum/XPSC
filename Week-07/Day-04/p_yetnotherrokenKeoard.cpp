#include<bits/stdc++.h>
#define int long long
#define pr pair<int, char>
using namespace std;
bool cmp(pr a, pr b)
{
    return a.first<b.first;
}
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
        vector<pr> l, u, ans;
        for(int i=0; i<s.size(); i++)
        {
            if(s[i]!='b' &&s[i]!='B')
            {
                if(s[i]>='a')
                    l.push_back({i,s[i]});
                else
                    u.push_back({i,s[i]});
            }
            else if(s[i]=='b' && l.size()>0)
            {
                l.pop_back();
            }
            else if(s[i]=='B' && u.size()>0)
            {
                u.pop_back();
            }
        }
        for(int i=0; i<l.size(); i++)
        {
            ans.push_back(l[i]);
        }
        for(int i=0; i<u.size(); i++)
        {
            ans.push_back(u[i]);
        }
        sort(ans.begin(),ans.end(),cmp);
        for(int i=0; i<ans.size(); i++)
        {
            cout<<ans[i].second;
        }
        cout<<'\n';
    }
    return 0;
}