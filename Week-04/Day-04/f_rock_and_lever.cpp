#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--)
    {
        int n, v;
        cin >> n;
        map<int,int> c;
        for (int i = 0; i < n; i++)
        {
            cin >> v;
            c[__lg(v)]++;
        }
        long long ans = 0;
        for (auto [x, y] : c)
        {
            ans += (1LL * y * (y - 1)) / 2;
        }
        cout << ans << '\n';
    }
    return 0;
}