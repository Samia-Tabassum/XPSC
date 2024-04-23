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
        int n, c=0, mn=INT_MAX;
        long long s=0;
        cin>>n;
        vector<int> a(n);
        for(int i=0; i<n; i++)
        {
            cin>>a[i];
            s+=abs(a[i]);
            mn=min(mn,abs(a[i]));
            if(a[i]<=0)
            {
                c++;
            }
        }
        if(c%2)
        {
            s-=(2*mn);
        }
        cout<<s<<'\n';
    }
    return 0;
}