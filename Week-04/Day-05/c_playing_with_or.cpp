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
        int n, k, l=0, r=0, c=0, ans=0;
        cin>>n>>k;
        int a[n];
        for(int i=0; i<n; i++)
        {
            cin>>a[i];
        }
        while(r<n)
        {
            if(a[r]%2)
                c++;
            if(r-l+1 == k)
            {
                if(c>0)
                {
                    ans++;
                }
                if(a[l]%2)
                    c--;
                l++;
            }
            r++;
        }
        cout<<ans<<'\n';
    }
    return 0;
}