class Solution
{
public:
	int search(string pat, string txt)
	{
        int n = txt.size(), k = pat.size(), l = 0, r = 0, ans = 0;
        vector<int> f1(26, 0), f2(26,0);
        for (char c : pat)
        {
            f1[c - 'a']++;
        }
        while (r < n)
        {
            f2[txt[r] - 'a']++;
            if ((r - l + 1) == k)
            {
                bool flag = true;
                for (int i = 0; i < 26; i++)
                {
                    if (f1[i] != f2[i])
                    {
                        flag = false;
                        break;
                    }
                }
                if (flag)
                {
                    ans++;
                }
                f2[txt[l]-'a']--;
                l++;
                r++;
            }
            else
                r++;
        }
        return ans;
    }
};