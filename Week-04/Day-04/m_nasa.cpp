#include <bits/stdc++.h>
using namespace std;
const int N = (1 << 15);
vector<int> palindromes;
void palindrome()
{
    for (int i = 0; i < N; i++)
    {
        string s = to_string(i);
        int len = s.length();
        bool flag = true;
        for (int i = 0; i < (len / 2); i++)
        {
            if (s[i] != s[len - i - 1])
            {
                flag = false;
                break;
            }
        }
        if (flag)
        {
            palindromes.push_back(i);
        }
    }
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    palindrome();
    int t;
    cin >> t;
    while (t--)
    {
        int n, x;
        cin >> n;
        vector<int> count(N), a;
        for (int i = 0; i < n; i++)
        {
            cin >> x;
            count[x]++;
            a.push_back(x);
        }
        long long ans = n;
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < palindromes.size(); j++)
            {
                int curr = (a[i] ^ palindromes[j]);
                ans += count[curr];
            }
        }
        cout << ans / 2 << '\n';
    }
    return 0;
}