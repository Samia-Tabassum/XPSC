#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int n, x;
    cin>>n>>x;
    vector<int> a;
    for(int i=0; i<n; i++)
    {
        int v;
        cin>>v;
        if(v!=x)
            a.push_back(v);
    }
    for(int v:a)
        cout<<v<<" ";
    return 0;
}