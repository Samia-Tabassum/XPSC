class Solution
{
  public:
    int longestKSubstr(string s, int k)
    {
        int n=s.size(), l=0, r=0, ans = -1;
        map<char,int> m;
        while(r < n)
        {
            m[s[r]]++;
            if(m.size()==k)
            {
                ans = max(ans,r-l+1);
            }  
            else if(m.size()>k)
            {
                while(m.size()>k && l<=r)
                {
                    m[s[l]]--;
                    if(m[s[l]]==0)
                        m.erase(s[l]);
                    l++;  
                }
            }
            r++;
        }
        return ans;
    }
};