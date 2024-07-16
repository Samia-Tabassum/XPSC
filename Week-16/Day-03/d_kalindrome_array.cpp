#include<bits/stdc++.h>
using namespace std;
int main () 
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--)
    {
        int n, p, q, i;
        cin>>n;
        int a[n];
        for(i=0; i<n; i++)
            cin>>a[i];
        bool flag = true;
        for(i=0; i<n/2; i++)
        {
            if(a[i] != a[n-1-i])
            {
                flag = false;
                p = a[i];
                q = a[n-1-i];
                break;
            }
        }
        if(flag)
        {
            cout<<"YES\n";
            continue;
        }
        vector<int> tmp;
        for(i=0; i<n; i++)
        {
            if(a[i] != p)
                tmp.push_back(a[i]);
        }
        bool flag1 = true;
        for(i=0; i<tmp.size()/2; i++)
        {
            if(tmp[i] != tmp[tmp.size()-1-i])
            {
                flag1 = false;
                break;
            }
        }
        if(flag1)
        {
            cout<<"YES\n";
            continue;
        }
        vector<int> tmp1;
        for(i=0; i<n; i++)
        {
            if(a[i] != q)
                tmp1.push_back(a[i]);
        }
        bool flag2 = true;
        for(i=0; i<tmp1.size()/2; i++)
        {
            if(tmp1[i] != tmp1[tmp1.size()-1-i])
            {
                flag2 = false;
                break;
            }
        }
        if(flag2)
            cout<<"YES\n";
        else
            cout<<"NO\n";
    }
    return 0;
}