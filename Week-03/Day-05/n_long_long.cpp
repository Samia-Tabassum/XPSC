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
        int n, l=0, r=0, ans=0;
        long long sum=0;
        cin>>n;
        vector<int> a(n), b;
        for(int i=0; i<n; i++)
        {
            cin>>a[i];
            sum+=abs(a[i]);
            if(a[i] != 0)
                b.push_back(a[i]);
        }
        bool flag=false;
        while(r<b.size())
        {
            if(b[r]<0)
            {
                if(!flag)
                {
                    ans++;
                    flag=true;
                }
            }
            else
            {
                l=r+1;
                flag=false;
            }
            r++;
        }
        cout<<sum<<" "<<ans<<'\n';
    }
    return 0;
}