#include<bits/stdc++.h>
#define ll long long
using namespace std;
int32_t main()
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
        set<int> st;
        for(int i=0; i<n; i++)
        {
            if(s[i]=='1')
                st.insert(i);
        }
        for(int i=0; i<n; i++)
        {
            if(s[i]=='0')
            {
                auto it=st.lower_bound(i-k);
                if(it==st.end() || *it>i+k)
                {
                    ans++;
                    st.insert(i);
                }
            }
        }
        cout<<ans<<'\n';
    }
    return 0;
}