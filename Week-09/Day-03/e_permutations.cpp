#include<bits/stdc++.h>
#define int long long
using namespace std;
int32_t main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin>>n;
    if(n==2 || n==3)
        cout<<"NO SOLUTION\n";
    else
    {
        vector<int> o, e;
        for(int i=1; i<=n; i++)
        {
            if(i%2)
                o.push_back(i);
            else
                e.push_back(i);
        }
        sort(o.begin(),o.end(),greater<int>());
        sort(e.begin(),e.end(),greater<int>());
        for(int v:o)
            cout<<v<<" ";
        for(int v:e)
            cout<<v<<" ";
        cout<<'\n';
    }
    return 0;
}