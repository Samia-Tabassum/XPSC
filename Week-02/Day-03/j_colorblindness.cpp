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
        cin>>n;
        vector<vector<char>> a(2, vector<char>(n));
        for(int i=0; i<2; i++)
        {
            for(int j=0; j<n; j++)
            {
                cin>>a[i][j];
                if(a[i][j]=='G')
                    a[i][j]='B';
            }
        }
        if(a[0]==a[1])
            cout<<"Yes\n";
        else
            cout<<"No\n";
    }
    return 0;
}