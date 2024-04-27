#include <bits/stdc++.h>
#define int long long
using namespace std;
const int N=1e4;
int32_t main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    vector<int> cube;
    for (int i=1; i<=N; i++)
    {
        cube.push_back(pow(i,3));
    }
    int t;
    cin>>t;
    while(t--)
    {
        int x;
        cin>>x;
        bool flag=false;
        for(int i=0; i<N; i++)
        {
            if(cube[i]>=x)
            {
                break;
            }
            int l=0, r=N-1, mid;
            int need=x-cube[i];
            bool ok=false;
            while(l<=r)
            {
                mid=l+(r-l)/2;
                if(cube[mid]==need)
                {
                    ok=true;
                    break;
                }
                else if(cube[mid]>need)
                {
                    r=mid-1;
                }
                else
                {
                    l=mid+1;
                }
            }
            if(ok)
            {
                flag=true;
                break;
            }
        }
        if(flag)
        {
            cout<<"YES\n";
        }
        else
        {
            cout<<"NO\n";
        }
    }
    return 0;
}