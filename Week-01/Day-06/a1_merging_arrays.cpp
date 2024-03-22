#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int n, m, l=0, r=0;
    cin>>n>>m;
    vector<int> a(n), b(m), c;
    for(int i=0; i<n; i++)
    {
        cin>>a[i];
    }
    for(int i=0; i<m; i++)
    {
        cin>>b[i];
    }
    while(l<n || r<m)
    {
        if(l==n)
        {
            c.push_back(b[r]);
            r++;
        }
        else if(r==m)
        {
            c.push_back(a[l]);
            l++;
        }
        else if(a[l]<b[r])
        {
            c.push_back(a[l]);
            l++;
        }
        else
        {
            c.push_back(b[r]);
            r++;
        }
    }
    for(int v:c)
        cout<<v<<" ";
    return 0;
}