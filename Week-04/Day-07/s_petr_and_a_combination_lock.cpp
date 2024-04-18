#include<bits/stdc++.h>
using namespace std;
bool check(int n, int k, int a[])
{
    if(n<0)
    {
        if(k%360)
            return false;
        return true;
    }
    int op1=check(n-1,k+a[n],a);
    int op2=check(n-1,k-a[n],a);
    return op1 | op2;
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin>>n;
    int a[n];
    for(int i=0; i<n; i++)
    {
        cin>>a[i];
    }
    if(check(n-1, 0, a))
        cout<<"YES\n";
    else
        cout<<"NO\n";
    return 0;
}