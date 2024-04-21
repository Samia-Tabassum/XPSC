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
        string s;
        cin>>s;
        map<char,vector<int>> m;
        int n=s.size();
        long long cost=0;
        for(int i=1; i<n-1; i++)
        {
            m[s[i]].push_back(i+1);
        }
        char p=s[0], q=s[n-1], tmp=s[0];
        if(p<q)
            sort(s.begin()+1,s.end()-1);
        else
            sort(s.begin()+1,s.end()-1,greater<int>());
        vector<int> v;
        v.push_back(1);
        for(int i=1; i<n-1; i++)
        {
            if((s[i]>= p && s[i]<= q) || (s[i]>=q && s[i]<=p))
            {
                for(int index : m[s[i]])
                {
                    v.push_back(index);
                }
                m.erase(s[i]);
                cost += abs((tmp-'a'+1)-(s[i]-'a'+1));
                tmp=s[i];
            }
        }
        cost += abs((tmp-'a'+1)-(s[n-1]-'a'+1));
        v.push_back(n);
        cout<<cost<<" "<<v.size()<<'\n';
        for(int x : v)
        {
            cout<<x<<" ";
        }
        cout<<'\n';
    }
    return 0;
}