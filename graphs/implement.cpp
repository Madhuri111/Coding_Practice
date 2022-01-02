#include<bits/stdc++.h>
using namespace std;

int main()
{
	int n=5;
	vector<int> adv[n];
//	vector<int> *adv=new vector<int>[n];
	//edge 0,1
	adv[0].push_back(1);
	adv[1].push_back(0);
	//edge 0,4
	adv[0].push_back(0);
	adv[4].push_back(0);
	//edge 1,4
	adv[1].push_back(4);
	adv[4].push_back(1);
	for(int i=0;i<n;i++)
	{
		for(auto x:adv[i])
			cout << i << "here" << x << endl;
	}
}
