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
        int n, ans=0;
        cin>>n;
        vector<int> a(n);
        map<int, int> m;
        for(int i=0; i<n; i++)
        {
            cin>>a[i];
            m[a[i]]++;
        }
        for(int i=0; i<n; i++)
        {
            if(m[a[i]]>1)
            {
                m[a[i]]--;
                ans=i+1;
            }
        }
        cout<<ans<<'\n';
    }
    return 0;
}