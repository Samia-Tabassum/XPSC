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
        int n, XOR=0;
        cin>>n;
        int a[n];
        for(int i=0; i<n; i++)
        {
            cin>>a[i];
            XOR ^= a[i];
        }
        if(n % 2 == 1)
            cout<<XOR<<'\n';
        else
        {
            if(XOR)
                cout<<-1<<'\n';
            else
                cout<<XOR<<'\n';
        }
    }
    return 0;
}