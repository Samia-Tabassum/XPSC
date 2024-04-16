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
        int n, ans;
        cin>>n;
        int bits=log2(n);
        ans=(1 << bits)-1;
        cout<<ans<<'\n';
    }
    return 0;
}