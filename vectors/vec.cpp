#include<bits/stdc++.h>
using namespace std;

int main()
{
	vector<int> A;
	for(int i=0;i<5;i++)
		A.push_back(i);
	vector<int>::iterator i;
	for(i=A.begin();i!=A.end();i++)
	{
		cout << *i << endl;
	}
	int j;
	cout << j << endl;
	for(j;j>0;)
	{
//		cout << j << endl;
		j--;
	}
	for(auto &i:A)
		cout << i << endl;
	for(auto i:A)
		cout << i << endl;

	//both of the above auto statements work

}
