#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    ll n, sum, sum1=0, sum2=0, i;
    cin>>n;
    vector<ll>a(n), o;
    for(i=0; i<n; i++)
    {
        cin>>a[i];
        if(a[i]%2==0)
            sum1+=a[i];
        else
        {
            o.push_back(a[i]);
            sum2+=a[i];
        }
    }
    sort(o.begin(),o.end());
    i=0;
    while(sum2 % 2 != 0)
    {
        sum2-=o[i];
        i++;
    }
    sum=sum1+sum2;
    cout<<sum<<'\n';
    return 0;
}