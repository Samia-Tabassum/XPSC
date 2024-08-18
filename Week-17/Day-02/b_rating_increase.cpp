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
        string s, a, b;
        cin>>s;
        a+=s[0];
        int i, j, n=-1, m=-1;
        for(i=1; i<s.size(); i++)
        {
            if(s[i] != '0')
                break;
            else
                a+=s[i];
        }
        for(j=i; j<s.size(); j++)
        {
            b+=s[j];
        }
        n=stoi(a);
        if(b.size()>0)
            m=stoi(b);
        if(m>n)
            cout<<a<<" "<<b<<'\n';
        else
            cout<<"-1\n";
    }
    return 0;
}