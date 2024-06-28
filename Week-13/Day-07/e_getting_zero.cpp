#include<bits/stdc++.h>
#define ll long long
using namespace std;
int32_t main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int N=32768;
    int a[N];
    for(int i=0; i<N; i++)
    {
        int n=i, c=0, x=N-i;
        while(n != 0)
        {
            n=(2*n)%N;
            c++;
        }
        a[i]=min(c,x);
        for(int j=max(0,i-15); j<i; j++)
        {
            a[j]=min(a[j],a[i]+(i-j));
        }
    }
    int t, n;
    cin>>t;
    while(t--)
    {
        cin>>n;
        cout<<a[n]<<" ";
    }
    return 0;
}