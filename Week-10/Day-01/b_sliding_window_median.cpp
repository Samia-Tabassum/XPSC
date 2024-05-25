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
    int n, k, l=0, r=0;
    cin>>n>>k;
    int a[n];
    pbds<pair<int,int>> p;
    for(int i=0; i<n; i++)
    {
        cin>>a[i];
    }
    while(r<n)
    {
        p.insert({a[r],r});
        if(p.size()==k)
        {
            int x=k/2;
            if(k%2==0)
                x--;
            auto it=p.find_by_order(x);
            cout<<it->first<<" ";
            p.erase({a[l],l});
            l++;
        }
        r++;
    }
    cout<<'\n';
    return 0;
}