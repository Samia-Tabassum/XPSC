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
        int n, k, ans=0;
        string s;
        cin>>n>>k>>s;
        map<char, int> m;
        for(char c:s)
            m[c]++;
        for(auto it : m)
        {
            if(it.second % 2 != 0)
            {
                ans++;
            }
        }
        if(ans-1 <=k)
            cout<<"Yes\n";
        else
            cout<<"No\n";
    }
    return 0;
}