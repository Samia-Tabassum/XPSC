#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int t;                  
    cin>>t;
    while(t--)
    {
        int n, s, x, ans=0;
        cin>>n;
        vector<int> a[n];
        set<int> u;
        for(int i=0; i<n; i++)
        {
            cin>>s;
            for(int j=0; j<s; j++)
            {
                cin>>x;
                a[i].push_back(x);
                u.insert(a[i][j]);
            }
        }
        for(int k=1; k<=50; k++)
        {
            set<int> tmp;
            for(int i=0; i<n; i++)
            {
                bool flag=false;
                for(int j=0; j<a[i].size(); j++)
                {
                    if(a[i][j]==k)
                    {
                        flag=true;
                        break;
                    }
                }
                if(!flag)
                {
                    for(int j=0; j<a[i].size(); j++)
                    {
                        tmp.insert(a[i][j]);
                    }
                }
            }
            if(tmp != u)
            {
                ans=max(ans,(int)tmp.size());
            }
        }
        cout<<ans<<'\n';
    }
    return 0;
}