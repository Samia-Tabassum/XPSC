#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int n, l=0, r=0;
    ll s, ans=0;
    cin>>n>>s;
    int a[n];
    for(int i=0; i<n; i++)
        cin>>a[i];
    ll sum=a[0];
    while(r<n)
    {
        if (sum >= s)
        {
            ans+=(n-r);
            sum-=a[l];
            l++;
        }
        else
        {
            r++;
            sum+=a[r];
        }
    }
    cout << ans << '\n';
    return 0;
}