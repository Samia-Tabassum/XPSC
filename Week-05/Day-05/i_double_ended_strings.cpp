#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--)
    {
        string a, b;
        cin>>a>>b;
        int n=a.size(), m=b.size(), mx=0;
        if (n>m)
        {
            swap(a,b);
        }
        for (int i=0; i<a.size(); i++)
        {
            for (int j=1; j<=n-i; j++)
            {
                string sub=a.substr(i,j);
                if (b.find(sub) != string::npos)
                {
                    mx=max(mx,(int)sub.size());
                }
            }
        }
        cout<<n+m-(2*mx)<<'\n';
    }
    return 0;
}