#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    int n, k, r = 0, l = 0;
    cin >> n >> k;
    int a[n];
    for (int i = 0; i < n; i++)
        cin >> a[i];
    ll ans = 0;
    map<int, int> m;
    while (r < n)
    {
        m[a[r]]++;
        if (m.size() <= k)
        {
            ans += (r - l + 1);
        }
        else
        {
            while (m.size()>k && l<=r)
            {
                auto it = m.find(a[l]);
                if (it != m.end())
                {
                    m[a[l]]--;
                    if (m[a[l]] == 0)
                    {
                        m.erase(it);
                    }
                }
                l++;
            }
            if (m.size() <= k)
            {
                ans += (r - l + 1);
            }
        }
        r++;
    }
    cout << ans << '\n';
    return 0;
}