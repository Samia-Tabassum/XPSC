#include<bits/stdc++.h>
#define int long long
using namespace std;
int32_t main()
{
    int n, mx=INT_MIN;
    cin>>n;
    int a[n];
    for(int i=0; i<n; i++)
    {
        cin>>a[i];
    }
    map<int,int> m;
    for(int i=0; i<n; i++)
    {
        map<int,int> mp;
        for(int j=2; j*j<=a[i]; j++)
        {
            if(a[i]%j==0)
            {
                while(a[i]%j==0)
                {
                    mp[j]++;
                    a[i]/=j;
                }
            }
        }
        if(a[i]>1)
        {
            mp[a[i]]++;
        }
        for(auto [x,y] : mp)
        {
            m[x]++;
        }
    }
    for(auto [x,y] : m)
    {
        mx = max(mx,y);
    }
    if(mx!=INT_MIN)
        cout<<mx<<'\n';
    else
        cout<<"1\n";
    return 0;
}