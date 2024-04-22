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
        string s;
        cin>>s;
        int n=s.size(), mn=INT_MAX;
        map<char, int> m;
        for(int i=0; i<n; i++)
        {
            m[s[i]]++;
        }
        for(auto [x,y] : m)
        {
            mn=min(mn,y);
        }
        if(m.size()==1 || (n%2 && m.size()==2 && mn==1))
            cout<<"NO\n";
        else
            cout<<"YES\n";
    }
    return 0;
}