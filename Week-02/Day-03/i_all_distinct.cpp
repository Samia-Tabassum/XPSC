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
        int n, x;
        cin>>n;
        set<int> s;
        for(int i=0; i<n; i++)
        {
            cin>>x;
            s.insert(x);
        }
        if((n-s.size())%2==0)
            cout<<s.size()<<'\n';
        else
            cout<<s.size()-1<<'\n';
    }
    return 0;
}