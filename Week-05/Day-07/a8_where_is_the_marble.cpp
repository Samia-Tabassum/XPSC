#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int n, q, k, j=1;
    while(cin>>n>>q)
    {
        if(n==0 && q==0)
            break;
        vector<int> a(n);
        for(int i=0; i<n; i++)
        {
            cin>>a[i];
        }
        sort(a.begin(),a.end());
        cout<<"CASE# "<<j<<":\n";
        for(int i=1; i<=q; i++)
        {
            cin>>k;
            auto it=lower_bound(a.begin(),a.end(),k)-a.begin();
            if(a[it]==k)
                cout<<k<<" found at "<<it+1<<'\n';
            else
                cout<<k<<" not found\n";
        }
        j++;
    }
    return 0;
}