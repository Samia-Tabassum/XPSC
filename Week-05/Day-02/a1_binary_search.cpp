#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int n, k;
    cin>>n>>k;
    int a[n];
    for(int i=0; i<n; i++)
    {
        cin>>a[i];
    }
    while(k--)
    {
        int q, l=0, r=n-1;
        cin>>q;
        bool flag=false;
        while(l<=r)
        {
            int mid=(l+r)/2;
            if(a[mid]==q)
            {
                flag=true;
                break;
            }
            else if(a[mid]>q)
            {
                r=mid-1;
            }
            else
            {
                l=mid+1;
            }
        }
        if(flag)
            cout<<"YES\n";
        else
            cout<<"NO\n";
    }
    return 0;
}