#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n, ans;
    cin >> n;
    int a[n];
    bool c[n + 1];
    memset(c, false, sizeof(c));
    for(int i = 0; i < n - 1; i++)
    {
        int x;
        cin >> x;
        a[i] = x;
        c[x] = true;
    }
    for(int i = 1; i <= n; i++)
    {
        if(!c[i])
        {
            ans = i;
            break;
        }
    }
    cout << ans << '\n';
    return 0;
}