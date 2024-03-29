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
        int n, q;
        cin>>n>>q;
        ll a[n], pre[n];
        for(int i=0; i<n; i++)
        {
            cin>>a[i];
        }
        pre[0]=a[0];
        for(int i=1; i<n; i++)
        {
            pre[i]=pre[i-1]+a[i];
        }
        while(q--)
        {
            int l, r, k;
            cin>>l>>r>>k;
            l--, r--;
            ll sum;
            if(l == 0)
                sum = (pre[n-1] - pre[r]) + (k * (r - l + 1));
            else
                sum = (pre[n-1] - pre[r] + pre[l-1]) + (k * (r - l + 1));
            if(sum % 2 != 0)
                cout<<"YES\n";
            else
                cout<<"NO\n";
        }
    }
    return 0;
}