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
        int n, x, ans=0;
        cin>>n;
        vector<int> a(n);
        map<int, int> m;
        for(int i=0; i<n; i++)
        {
            cin>>a[i];
            m[a[i]]++;
        }
        sort(a.begin(),a.end());
        for(int i=0; i<n; i++)
        {
            x=a[i];
            if(m[x] != 0)
            {
                ans++;
                while(m[x]>0)
                {
                    m[x]--;
                    x++;
                }
            }
        }
        cout<<ans<<'\n';
    }
    return 0;
}