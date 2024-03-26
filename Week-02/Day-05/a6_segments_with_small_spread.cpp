#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    long long k, l = 0, r = 0, ans = 0;
    cin >> n >> k;
    vector<long long> a(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    multiset<long long> ms;
    while (r < n)
    {
        ms.insert(a[r]);
        long long mn, mx;
        mn = *ms.begin(), mx = *ms.rbegin();
        if ((mx - mn) <= k)
        {
            ans += (r - l + 1);
        }
        else
        {
            while (l < r)
            {
                mn = *ms.begin(), mx = *ms.rbegin();
                if ((mx - mn) <= k)
                    break;
                auto it = ms.find(a[l]);
                ms.erase(it);
                l++;
            }
            mn = *ms.begin(), mx = *ms.rbegin();
            if ((mx - mn) <= k)
            {
                ans += (r - l + 1);
            }
        }
        r++;
    }
    cout << ans << '\n';
    return 0;
}