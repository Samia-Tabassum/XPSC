#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n, count=0, mx=INT_MIN;
        cin>>n;
        char c;
        cin>>c;
        string s;
        cin>>s;
        s+=s;
        for(int i=0; i<s.size(); i++)
        {
            if(s[i]==c)
            {
                count=0;
                while(s[i]!='g' && i<s.size())
                {
                    count++;
                    i++;
                }
                mx=max(count,mx);
            }
        }
        cout<<mx<<'\n';
    }
    return 0;
}