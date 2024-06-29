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
        int n, x;
        cin>>n;
        vector<int> a;
        map<int, int> m;
        for(int i=0; i<n; i++)
        {
            cin>>x;
            x%=10;
            m[x]++;
            if(m[x]<=3)
                a.push_back(x);
        }
        bool flag=false;
        for(int i=0; i<a.size()-2; i++)
        {
            for(int j=i+1; j<a.size()-1; j++)
            {
                for(int k=j+1; k<a.size(); k++)
                {
                    if((a[i]+a[j]+a[k])%10==3)
                    {
                        flag=true;
                        break;
                    }
                }
            }
        }
        if(flag)
            cout<<"YES\n";
        else
            cout<<"NO\n";
    }
    return 0;
}