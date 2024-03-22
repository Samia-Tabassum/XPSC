#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    list<int>l;
    while(n!=0)
    {
        int x=n%10;
        l.push_front(x);
        n=n/10;
    }
    int x=l.size();
    for(int i=0; i<(4-x); i++)
    {
        l.push_front(0);
    }
    for(int val:l)
        cout<<val;
    return 0;
}