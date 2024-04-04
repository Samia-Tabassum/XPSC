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
        string a, b;
        cin>>a>>b;
        int n=a.size()-1, m=b.size()-1;
        if(a==b)
            cout<<"=\n";
        else if(a[n]=='S' && b[m]=='M')
            cout<<"<\n";
        else if(a[n]=='S' && b[m]=='L')
            cout<<"<\n";
        else if(a[n]=='M' && b[m]=='L')
            cout<<"<\n";
        else if(a[n]=='M' && b[m]=='S')
            cout<<">\n";
        else if(a[n]=='L' && b[m]=='S')
            cout<<">\n";
        else if(a[n]=='L' && b[m]=='M')
            cout<<">\n";
        else if(a[n]=='L' && b[m]=='L')
            (a.size()>b.size()) ? cout<<">\n" : cout<<"<\n";
        else if(a[n]=='S' && b[m]=='S')
            (a.size()>b.size()) ? cout<<"<\n" : cout<<">\n";
    }
    return 0;
}