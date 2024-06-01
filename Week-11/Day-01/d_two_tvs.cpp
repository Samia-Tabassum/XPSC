#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int n, l, r, s=0;
    cin>>n;
    map<int, int> d;
    for(int i=0; i<n; i++)
    {
        cin>>l>>r;
        d[l]++;
        d[r+1]--;
    }
    bool flag=true;
    for(auto [i,v] : d)
    {
        s+=v;
        if(s>2)
        {
            flag=false;
            break;
        }
    }
    if(flag)
        cout<<"YES\n";
    else
        cout<<"NO\n";
    return 0;
}