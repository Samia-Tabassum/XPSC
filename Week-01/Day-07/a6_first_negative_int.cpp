vector<long long> printFirstNegativeInteger(long long int A[], long long int N, long long int K)
{
    vector<long long> v;
    queue<long long> q;
    long long l=0, r=0;
    while(r<N)
    {
        if(A[r]<0)
        {
            q.push(A[r]);
        }
        if((r-l+1)==K)
        {
            if(q.size()==0)
                v.push_back(0);
            else
                v.push_back(q.front());
            if(A[l]<0)
                q.pop();
            l++;
            r++;
        }
        else
        {
            r++;
        }
    }
    return v;
}