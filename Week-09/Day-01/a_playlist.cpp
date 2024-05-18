#include<bits/stdc++.h>
#define int long long
using namespace std;
int32_t main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin>>n;
    int a[n];
    for(int i=0; i<n; i++)
    {
        cin>>a[i];
    }
    int l=0, r=0, mx=INT_MIN;
    set<int> s;
    while(r<n)
    {
        s.insert(a[r]);
        if(r-l+1 == s.size())
        {
            mx=max(mx,r-l+1);
            r++;
        }
        else
        {
            auto it=s.find(a[l]);
            s.erase(*it);
            l++;
        }
    }
    cout<<mx<<'\n';
    return 0;
}