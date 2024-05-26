#include <bits/stdc++.h>
#include<ext/pb_ds/assoc_container.hpp>
#include<ext/pb_ds/tree_policy.hpp>
#define int long long
using namespace __gnu_pbds;
using namespace std;
template <typename T> using pbds = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;
int32_t main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int n, ans=0;
    string s, r;
    cin>>n>>s;
    r=s;
    reverse(r.begin(),r.end());
    map<char, vector<int>> ms, mr;
    for(int i=0; i<n; i++)
    {
        ms[s[i]].push_back(i);
        mr[r[i]].push_back(i);
    }
    vector<int> a(n);
    for(char ch='a'; ch<='z'; ch++)
    {
        for(int i=0; i<ms[ch].size(); i++)
        {
            a[mr[ch][i]]=ms[ch][i];
        }
    }
    pbds<int> p;
    for(int i=n-1; i>=0; i--)
    {
        ans+=p.order_of_key(a[i]);
        p.insert(a[i]);
    }
    cout<<ans<<'\n';
    return 0;
}