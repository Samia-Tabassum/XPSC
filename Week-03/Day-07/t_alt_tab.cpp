#include<bits/stdc++.h>
#define pr pair<string, int>
using namespace std;
bool cmp(pr a, pr b)
{
    return a.second>b.second;
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin>>n;
    string s;
    map<string, int> m;
    vector<pr> v;
    for(int i=0; i<n; i++)
    {
        cin>>s;
        m[s]=i;
    }
    for(auto it : m)
    {
        v.push_back({it.first,it.second});
    }
    sort(v.begin(),v.end(),cmp);
    for(auto it : v)
    {
        string t=it.first;
        int l=t.size()-1;
        char p=t[l-1], q=t[l];
        cout<<p<<q;
    }
    cout<<'\n';
    return 0;
}