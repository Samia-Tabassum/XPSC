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
        int n, c0=0, c1=0;
        string s;
        cin>>n>>s;
        for(int i=0; i<n; i++)
        {
            if(s[i]=='0')
                c0++;
            else
                c1++;
        }
        int mn=min(c0,c1);
        if(mn%2)
            cout<<"Zlatan\n";
        else
            cout<<"Ramos\n";
    }
    return 0;
}