#include<bits/stdc++.h>
#include<deque>
using namespace std;

int main()
{

	vector<int> A={1, 2, 3, 1, 4, 5, 2, 3, 6};
	int k=3;
	deque<int> dg;
	int i;
	for(i=0;i<k;i++)
	{
		while(!dg.empty() && A[i]>=A[dg.back()])
		{
			dg.pop_back();
		}
		dg.push_back(i);
	}
	int n=A.size();
	vector<int> ans;
	ans.resize(n-k+1);
	for(;i<A.size();i++)
	{
		//cout << A[dg.front()] << endl;
		ans[i-k]=A[dg.front()];
		//ans.push_back(A[dg.front()]);
		//cout << ans[i] << endl;
		while(dg.front()<=i-k && !dg.empty())
		{
			dg.pop_front();
		}
		while(!dg.empty() && A[i]>=A[dg.back()])
		{
			dg.pop_back();
		}
		dg.push_back(i);
	}
		ans[n-k]=A[dg.front()];

	for(i=0;i<ans.size();i++)
	{
		cout << ans[i]<<endl;
	}

}

