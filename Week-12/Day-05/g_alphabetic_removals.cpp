#include<bits/stdc++.h>
#define ll long long
using namespace std;
int32_t main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int n, k;
    string s, t;
    cin>>n>>k>>s;
    t=s;
    sort(t.begin(),t.end());
    map<char, int> m;
    for(int i=0; i<k; i++)
    {
        m[t[i]]++;
    }
    for(int i=0; i<n; i++)
    {
        if(m[s[i]]>0)
            m[s[i]]--;
        else
            cout<<s[i];
    }
    cout<<'\n';
    return 0;
}