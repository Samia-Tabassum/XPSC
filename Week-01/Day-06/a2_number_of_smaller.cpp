#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int n, m, l=0, r=0, ans=0;
    cin>>n>>m;
    int a[n], b[m];
    for(int i=0; i<n; i++)
    {
        cin>>a[i];
    }
    for(int i=0; i<m; i++)
    {
        cin>>b[i];
    }
    while(r<m)
    {
        while(a[l]<b[r] && l<n)
        {
            ans++;
            l++;
        }
        r++;
        cout<<ans<<" ";
    }
    return 0;
}