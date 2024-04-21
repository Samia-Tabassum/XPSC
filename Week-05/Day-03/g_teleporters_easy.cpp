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
        int n, c, x, ans=0;
        long long s=0;
        cin>>n>>c;
        vector<int> v;
        for(int i=1; i<=n; i++)
        {
            cin>>x;
            v.push_back(i+x);
        }
        sort(v.begin(),v.end());
        for(int i=0; i<n; i++)
        {
            s+=v[i];
            if(s>c)
                break;
            ans++;
        }
        cout<<ans<<'\n';
    }
    return 0;
}