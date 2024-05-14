#include<bits/stdc++.h>
#define int long long
using namespace std;
int32_t main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin>>n;
    cout<<n/2<<'\n';
    if(n%2)
    {
        for(int i=1; i<n/2; i++)
        {
            cout<<"2 ";
        }
        cout<<"3\n";
    }
    else
    {
        for(int i=0; i<n/2; i++)
        {
            cout<<"2 ";
        }
        cout<<"\n";
    }
    return 0;
}