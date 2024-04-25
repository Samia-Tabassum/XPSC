#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int n, q, k;
    cin>>n;
    vector<int> a(n);
    for(int i=0; i<n; i++)
    {
        cin>>a[i];
    }
    cin>>q;
    for(int i=0; i<q; i++)
    {
        cin>>k;
        auto it=lower_bound(a.begin(),a.end(),k);
        auto it1=upper_bound(a.begin(),a.end(),k);
        it--;
        if(it<a.begin())
            cout<<"X ";
        else
            cout<<*it<<" ";
        if(it1==a.end())
            cout<<"X\n";
        else
            cout<<*it1<<'\n';
    }
    return 0;
}