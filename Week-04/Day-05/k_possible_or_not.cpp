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
        int n, b;
        cin>>n>>b;
        int a[n];
        for(int i=0; i<n; i++)
        {
            cin>>a[i];
        }
        int an = ~(0);
        for(int i=0; i<n; i++)
        {
            if((a[i]&b) == b)
            {
                an &= a[i];
            }
        }
        if(an == b)
            cout<<"YES\n";
        else
            cout<<"NO\n";
    }
    return 0;
}