#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin>>s;
    bool c[26];
    bool flag=0;
    char ans;
    memset(c,false,sizeof(c));
    for(char ch: s)
    {
        c[ch-'a']=true;
    }
    for(int i=0; i<26; i++)
    {
        if(!c[i])
        {
            ans=i+'a';
            flag=1;
            break;
        }
    }
    if(flag)
        cout<<ans<<'\n';
    else
        cout<<"None\n";
    return 0;
}