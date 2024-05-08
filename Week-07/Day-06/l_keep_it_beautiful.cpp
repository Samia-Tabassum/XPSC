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
        int q, x;
        cin>>q;
        vector<int> v;
        string ans;
        bool flag=false;
        for(int i=0; i<q; i++)
        {
            cin>>x;
            if(v.size()==0)
            {
                ans+='1';
                v.push_back(x);
            }
            else
            {
                if(flag)
                {
                    if(x<v.back())
                    {
                        ans+='0';
                    }
                    else if(x>v[0])
                    {
                        ans+='0';
                    }
                    else
                    {
                        ans+='1';
                        v.push_back(x);
                    }
                }
                else
                {
                    if(x>=v.back())
                    {
                        ans+='1';
                        v.push_back(x);
                    }
                    else if(x>v[0])
                    {
                        ans+='0';
                    }
                    else
                    {
                        flag=true;
                        ans+='1';
                        v.push_back(x);
                    }
                }
            }
        }
        cout<<ans<<'\n';
    }
    return 0;
}