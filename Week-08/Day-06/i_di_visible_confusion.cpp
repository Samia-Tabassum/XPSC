#include<bits/stdc++.h>
#define int long long
using namespace std;
int32_t main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int a[n];
        for(int i=0; i<n; i++)
        {
            cin>>a[i];
        }
        bool flag=true;
        for(int i=0; i<n; i++)
        {
            bool found=false;
            for(int j=2; j<i+3; j++)
            {
                if(a[i]%j)
                {
                    found=true;
                    break;
                }
            }
            if(!found)
            {
                flag=false;
                break;
            }
        }
        if(flag)
            cout<<"YES\n";
        else
            cout<<"NO\n";
    }
    return 0;
}