#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int n, q, v, ans=0;
    cin>>n;
    vector<int> x(n);
    for(int i=0; i<n; i++)
    {
        cin>>x[i];
    }
    sort(x.begin(),x.end());
    cin>>q;
    while(q--)
    {
        cin>>v;
        ans=upper_bound(x.begin(),x.end(), v)-x.begin();
        cout<<ans<<'\n';
    }
    return 0;
}