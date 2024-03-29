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
        int n;
        string s, v;
        cin>>n>>s;
        transform(s.begin(), s.end(), s.begin(), ::tolower);
        bool flag = true;
        map<char, int> m;
        for(char c : s)
        {
            if(m[c] == 0)
            {
                v.push_back(c);
                m[c]++;
            }
            else
            {
                if(c != v.back())
                {
                    flag=false;
                    break;
                }
            }
        }
        if(flag)
        {
            if(v == "meow")
                cout<<"YES\n";
            else
                cout<<"NO\n";
        }
        else
            cout<<"NO\n";
    }
    return 0;
}