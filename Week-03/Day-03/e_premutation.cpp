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
        int n, x;
        cin>>n;
        vector<int> a[n];
        map<int, int> m;
        for(int i=0; i<n; i++)
        {
            for(int j=0; j<n-1; j++)
            {
                cin>>x;
                a[i].push_back(x);
                if(j == n-2)
                    m[x]++;
            }
        }
        int mx=0, c=0;
        for(auto x : m)
        {
            if(x.second > c)
            {
                mx=x.first;
                c=x.second;
            }
        }
        for(int i=0; i<n; i++)
        {
            if(find(a[i].begin(),a[i].end(),mx) == a[i].end())
            {
                for(int x : a[i])
                    cout<<x<<" ";
                break;
            }
        }
        cout<<mx<<'\n';
    }
    return 0;
}