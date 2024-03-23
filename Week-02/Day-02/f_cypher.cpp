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
        int n, b;
        cin>>n;
        vector<int> a(n);
        string s[n];
        for(int i=0; i<n; i++)
            cin>>a[i];
        for(int i=0; i<n; i++)
            cin>>b>>s[i];
        for(int i=0; i<n; i++)
        {
            for(int j=0; j<s[i].size(); j++)
            {
                if(s[i][j]=='D')
                {
                    if(a[i]==9)
                        a[i]=0;
                    else
                        a[i]++;
                }
                else
                {
                    if(a[i]==0)
                        a[i]=9;
                    else
                        a[i]--;
                }
            }
        }
        for(int v:a)
            cout<<v<<" ";
        cout<<'\n';
    }
    return 0;
}