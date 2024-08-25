#include<bits/stdc++.h>
#define ll long long
using namespace std;
int32_t main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL);
    int tc=1;
    cin>>tc;
    while(tc--)
    {
        ll n, p=0, q=0, r=0, s=0, f=0, f1=0;
        cin>>n;
        ll a[n];
        map<ll, ll> m;
        for(int i=0; i<n; i++)
        {
            cin>>a[i];
            if(a[i]%2)
                m[1]++;
            else
                m[0]++;
        }
        for(int i=0; i<n-2; i++)
        {
            for(int j=i+1; j<n-1; j++)
            {
                s=a[i]+a[j];
                if(a[i]%2)
                    m[1]--;
                else
                    m[0]--;
                if(a[j]%2)
                    m[1]--;
                else
                    m[0]--;
                if(s%2)
                {
                    if(m[0])
                    {
                        p=i+1, q=j+1;
                        f=1;
                        break;
                    }
                }
                else
                {
                    if(m[1])
                    {
                        p=i+1, q=j+1;
                        f1=1;
                        break;
                    }
                }
                if(a[i]%2)
                    m[1]++;
                else
                    m[0]++;
                if(a[j]%2)
                    m[1]++;
                else
                    m[0]++;
            }
            if(p)
                break;
        }
        if(p)
        {
            if(f)
            {
                for(int i=0; i<n; i++)
                {
                    if(a[i]%2==0 && i+1 != p && i+1 != q)
                    {
                        r=i+1;
                        break;
                    }
                }
            }
            else
            {
                for(int i=0; i<n; i++)
                {
                    if(a[i]%2 && i+1 != p && i+1 != q)
                    {
                        r=i+1;
                        break;
                    }
                }
            }
        }
        if(r)
            cout<<"YES\n"<<p<<" "<<q<<" "<<r<<'\n';
        else
            cout<<"NO\n";
    }
    return 0;
}