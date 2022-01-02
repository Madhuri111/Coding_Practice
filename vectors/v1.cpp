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
	for(auto &i:A)
		cout << i << endl;
	for(auto i:A)
		cout << i << endl;

	//both of the above auto statements work

	//insert new element
	A.push_back(10):
	//adding two vectors
	//will take care later of below code
	vector<int> B[]={6,7,8};
	A.push_back(B);
	for(auto i:A)
	{
		cout << i << endl;
		cout << "hoyy " << endl;
	}
}
