#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--)
    {
        int n, k=-1, mn=INT_MAX;
        cin>>n;
        int h[n];
        for(int i=0; i<n; i++)
        {
            cin>>h[i];
        }
        sort(h, h+n);
        if(n==2)
        {
            cout<<h[0]<<" "<<h[1]<<'\n';
            continue;
        }
        for(int i=0; i<n-1; i++)
        {
            if(mn>abs(h[i]-h[i+1]))
            {
                mn=abs(h[i]-h[i+1]);
                k=i+1;
            }
        }
        for(int i=k; i<n; i++)
        {
            cout<<h[i]<<" ";
        }
        for(int i=0; i<k; i++)
        {
            cout<<h[i]<<" ";
        }
        cout<<'\n';
    }
    return 0;
}