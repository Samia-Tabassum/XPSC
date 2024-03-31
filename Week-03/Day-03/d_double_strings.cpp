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
        cin>>n;
        string s[n], a, b;
        map<string, int> m;
        for(int i=0; i<n; i++)
        {
            cin>>s[i];
            m[s[i]]++;
        }
        for(int i=0; i<n; i++)
        {
            int flag = 0;
            for(int j=0; j<s[i].size(); j++)
            {
                a=s[i].substr(0,j);
                b=s[i].substr(j,s[i].size()-j);
                if(m[a]>0 && m[b]>0)
                {
                    flag = 1;
                    break;
                }              
            }
            cout<<flag;
        }
        cout<<'\n';
    }
    return 0;
}