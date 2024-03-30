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
        int n;
        cin>>n;
        int a[n];
        multiset<int> s;
        long long ans=0;
        for(int i=0; i<n; i++)
        {
            cin>>a[i];
            if(a[i] == 0)
            {
                if(s.empty())
                    ans+=0;
                else
                {
                    ans+=(*s.rbegin());
                    s.erase(s.find(*s.rbegin()));
                }
            }
            else
                s.insert(a[i]);
        }
        cout<<ans<<'\n';
    }
    return 0;
}