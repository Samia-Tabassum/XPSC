#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    map<string, char> m = { 
        {"1", 'a'}, {"2", 'b'}, {"3", 'c'}, {"4", 'd'}, {"5", 'e'},
        {"6", 'f'}, {"7", 'g'}, {"8", 'h'}, {"9", 'i'}, {"10", 'j'},
        {"11", 'k'}, {"12", 'l'}, {"13", 'm'}, {"14", 'n'}, {"15", 'o'},
        {"16", 'p'}, {"17", 'q'}, {"18", 'r'}, {"19", 's'}, {"20", 't'},
        {"21", 'u'}, {"22", 'v'}, {"23", 'w'}, {"24", 'x'}, {"25", 'y'},
        {"26", 'z'} };
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        string s, k;
        cin>>n>>s;
        for(int i=0; i<n; i++)
        {
            if((i+2 < n) && (s[i+2] != '0'))
            {
                k+=m[s.substr(i,1)];
            }
            else if((i+3 < n) && (s[i+2] == '0') && (s[i+3] == '0'))
            {
                k+=m[s.substr(i,1)];
            }
            else if((i+2 < n) && (s[i+2] == '0'))
            {
                k+=m[s.substr(i,2)];
                i=i+2;
            }
            else
            {
                k+=m[s.substr(i,1)];
            }
        }
        cout<<k<<'\n';
    }
    return 0;
}