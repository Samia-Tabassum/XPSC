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
        int x, a, b;
        cin>>x;
        b=(1<<(int)log2(x));
        a=x-b;
        cout<<a<<" "<<b<<'\n';
    }
    return 0;
}