#include<bits/stdc++.h>
#define int long long
using namespace std;
int32_t main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    string s;
    cin>>s;
    map<char,int> m;
    for(int i=0; i<s.size(); i++)
    {
        m[s[i]]++;
    }
    bool flag =true;
    int c=0;
    string a, b;
    char ch='0';
    for(auto [x,y] : m)
    {
        if(y%2)
        {
            c++;
            ch=x;
        }
        if(c>1)
        {
            flag=false;
            break;
        }
    }
    if(flag)
    {
        for(auto [x,y] : m)
        {
            int p=y/2;
            while(p--)
            {
                a+=x;
            }
            y=0;
        }
        b=a;
        reverse(b.begin(),b.end());
        if(ch != '0')
            a+=ch;
        cout<<a<<b;
    }
    else
        cout<<"NO SOLUTION\n";
    return 0;
}