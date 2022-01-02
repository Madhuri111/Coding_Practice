
int Solution::solve(vector &A, int B) {

	vector<pair<int,int>>a;

	for(int i=0;i<A.size();i++){

		if(A[i]==1){

			a.push_back({i+1-B+1,i+1+B-1});

		}

	}

	sort(a.begin(),a.end());

	int ans=0,i=0,right=1,left,n=A.size();

	while(right<n){

		if(i==a.size()||a[i].first>right) return -1;

		left=a[i].second;

		while(i+1<a.size()&&a[i+1].first<=right){

			i++;

			left=max(left,a[i].second);

		}

		if(left<right) return -1;

		right=left+1;

		i++;

		ans++;

	}

	return ans;

}
