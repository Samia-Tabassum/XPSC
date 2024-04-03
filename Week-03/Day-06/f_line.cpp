#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--)
    {
        int n, l, r;
        ll sum=0;
        string s;
        cin>>n>>s;
        vector<int> ans;
        for(int i=0; i<n; i++)
        {
            if(s[i]=='L') 
                sum+=i;
            else
                sum+=(n-1-i);
        }
        for(int i=0; i<n; i++)
        {
            l=i;
            r=n-1-i;
            if(s[i]=='L')
                ans.push_back(r-l);
            else
                ans.push_back(l-r);
        }
        sort(ans.begin(),ans.end());
        reverse(ans.begin(),ans.end());
        for(int i=0; i<n; i++)
        {
            if(ans[i]>0)
                sum+=ans[i];
            cout<<sum<<" ";
        }
        cout<<'\n';
    }
    return 0;
}