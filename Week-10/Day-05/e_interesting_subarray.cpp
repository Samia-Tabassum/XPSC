#include <bits/stdc++.h>
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
        int n;
        cin>>n;
        int a[n];
        for(int i=0; i<n; i++)
        {
            cin>>a[i];
        }
        bool flag=false;
        for(int i=0; i<n-1; i++)
        {
            if(abs(a[i]-a[i+1])>1)
            {
                cout<<"YES\n"<<i+1<<" "<<i+2<<'\n';
                flag=true;
                break;
            }
        }
        if(!flag)
            cout<<"NO\n";
    }
    return 0;
}