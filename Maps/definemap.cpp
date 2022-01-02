#include<bits/stdc++.h>

using namespace std;

int main()
{
	//each element has key value and a mapped value
	//begin,end,pair_insert(),size,empty,erase,,clear
	//
	map<int,int> answer;

	answer.insert(pair<int,int>(1,40));
	answer.insert(pair<int,int>(2,40));

	map<int,int> answer2(answer.begin(),answer.end());
	map<int, int>::iterator itr;
	cout << "\nThe map gquiz1 is : \n";
	cout << "\tKEY\tELEMENT\n";
	for (itr = answer.begin(); itr != answer.end(); ++itr) {
		cout << '\t' << itr->first
			<< '\t' << itr->second << '\n';
	}
	cout << endl;

	//below statement removes elements before 3
	    gquiz2.erase(gquiz2.begin(), gquiz2.find(3));
}
