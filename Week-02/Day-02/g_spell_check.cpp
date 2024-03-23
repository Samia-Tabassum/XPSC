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
        int n;
        string s;
        cin>>n;
        map<char,int> mp;
        for(int i=0; i<n; i++)
        {
            cin>>s[i];
            mp[s[i]]++;
        }
        if(n!=5)
            cout<<"NO\n";
        else
        {
            if(mp['T']==1 && mp['i']==1 && mp['m']==1 && mp['u']==1 && mp['r']==1)
                cout<<"YES\n";
            else
                cout<<"NO\n";
        }
    }
    return 0;
}