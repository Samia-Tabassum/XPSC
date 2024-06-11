#include<bits/stdc++.h>
#define ll long long
using namespace std;
int32_t main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--)
    {
        int n, x, mx=0;
        cin>>n;
        map<int,int> m;
        for(int i=0; i<n; i++)
        {
            cin>>x;
            m[x]++;
            mx=max(mx,m[x]);
        }
        if(2*mx-n >=0)
            cout<<2*mx-n<<'\n';
        else
        {
            if(n%2)
                cout<<"1\n";
            else
                cout<<"0\n";
        }
    }
    return 0;
}