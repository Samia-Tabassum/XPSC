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
        int a, b, c;
        cin>>a>>b>>c;
        long long d=abs(b-c)+c;
        if(a<d)
            cout<<"1\n";
        else if(d<a)
            cout<<"2\n";
        else
            cout<<"3\n";
    }
    return 0;
}