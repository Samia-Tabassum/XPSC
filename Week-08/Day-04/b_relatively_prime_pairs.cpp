#include<bits/stdc++.h>
#define int long long
using namespace std;
int32_t main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int l, r;
    cin>>l>>r;
    cout<<"YES\n";
    for(int i=l; i<r; i+=2)
    {
        cout<<i<<" "<<i+1<<'\n';
    }
    return 0;
}