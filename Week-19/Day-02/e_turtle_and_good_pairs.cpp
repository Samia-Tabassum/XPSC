#include<bits/stdc++.h>
#define ll long long
using namespace std;
int32_t main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL);
    int tc=1;
    cin>>tc;
    while(tc--)
    {
        ll n;
        string s;
        cin>>n>>s;
        sort(s.begin(),s.end());
        for(int i=0, j=n-1; i<n/2, j>=n/2; i++, j--)
        {
            if(i != j)
                cout<<s[i];
            cout<<s[j];
        }
        cout<<'\n';
    }
    return 0;
}