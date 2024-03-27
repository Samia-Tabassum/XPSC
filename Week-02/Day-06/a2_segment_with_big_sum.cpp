#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int n, l=0, r=0, ans=INT_MAX;
    ll s;
    cin>>n>>s;
    int a[n];
    for(int i=0; i<n; i++)
        cin>>a[i];
    ll sum=a[0];
    while(r<n)
    {
        if (sum >= s)
        {
            ans = min(ans, r - l + 1);
            sum-=a[l];
            l++;
        }
        else
        {
            r++;
            sum+=a[r];
        }
    }
    if(ans != INT_MAX)
        cout << ans << '\n';
    else
        cout << "-1\n";
    return 0;
}