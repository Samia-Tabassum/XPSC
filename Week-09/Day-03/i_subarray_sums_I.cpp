#include<bits/stdc++.h>
#define int long long
using namespace std;
int32_t main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int n, x;
    cin>>n>>x;
    int a[n];
    for(int i=0; i<n; i++)
    {
        cin>>a[i];
    }
    int l=0, r=0, s=0, c=0;
    while(r<n)
    {
        s+=a[r];
        if(s==x)
        {
            c++;
            s-=a[l];
            s-=a[r];
            l++;
        }
        else if(s>x)
        {
            s-=a[l];
            s-=a[r];
            l++;
        }
        else
        {
            r++;
        }
    }
    cout<<c<<'\n';
    return 0;
}