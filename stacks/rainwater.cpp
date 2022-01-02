#include<bits/stdc++.h>

using namespace std;

int main()
{
	vector<int> A={0, 1, 0, 2, 1, 0, 1, 3, 2, 1, 2, 1};
	int n=A.size();
	int left=0,right=n-1;
	int result=0;

	int maxleft=0,maxright=0;

	while(left<=right)
	{
		if(A[left]<=A[right])
		{
			if(maxleft<A[left]) maxleft=A[left];
			else result+=maxleft-A[left];
			left++;
		}
		else
		{
			if(maxright<A[right]) maxright=A[right];
			else result+=maxright-A[right];
			right--;
		}
	}
		cout << result << endl;
}

