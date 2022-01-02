int count_sum(vector<int> A,int y,int n )
{
     int sum=0;
    for(int i=n-1;i>=0;i--)
    {
        
        int temp=A[i]-y;
        if(temp<=0)
            break;
        sum+=temp;
    }
    return sum;
}

int Solution::solve(vector<int> &A, int B) {

    int n=A.size();
    sort(A.begin(),A.end());
     long long int l=0,r=A[n-1],ans=0;
    while(l<=r)
    {
        long long int mid=l + (r-l)/2;
        int k=count_sum(A,mid,n);
        // if(A[mid])
        if(k==B)
        {
            ans=max(mid,ans);
        }
        if(k>B)
        {
            l=mid+1;
        }
        else{
            r=mid-1;
        }
    }

    return ans;

}
