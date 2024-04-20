#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int n, k, l, r;
    cin>>n;
    vector<int> a(n);
    for(int i=0; i<n; i++)
    {
        cin>>a[i];
    }
    sort(a.begin(),a.end());
    cin>>k;
    while(k--)
    {
        cin>>l>>r;
        auto i1=lower_bound(a.begin(),a.end(),l);
        auto i2=upper_bound(a.begin(),a.end(),r);
        cout<<i2-i1<<" ";
    }
    return 0;
}