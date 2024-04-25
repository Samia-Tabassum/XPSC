#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        vector<ll> a(n), s(n);
        for(int i=0; i<n; i++)
        {
            cin>>a[i];
        }
        reverse(a.begin(),a.end());
        s[0]=a[0];
        for(int i=1; i<n; i++)
        {
            s[i]=s[i-1]+a[i];
        }
        sort(s.begin(),s.end());
        cout<<s[n-1]<<'\n';
    }
    return 0;
}