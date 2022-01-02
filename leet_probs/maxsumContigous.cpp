int Solution::maxSubArray(const vector<int> &A) {

	            int n = A.size();

	int max_so_far = -1000000000, max_ending_here = 0;
    // int n=sizeof(A)/sizeof(A[0]);

	for (int i = 0; i < n; i++)
	{
		max_ending_here = max_ending_here + A[i];
		if (max_so_far < max_ending_here)
			max_so_far = max_ending_here;

		if (max_ending_here < 0)
			max_ending_here = 0;
	}
	return max_so_far;
} 