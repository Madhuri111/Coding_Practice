#include<iostream>
#include<vector>
using namespace std;

int main()
{
	vector<int> vec;
	for(int i=0;i<9;i++)
	{
		vec.push_back(i);
	}
	for(auto i=vec.begin();i!=vec.end();++i)
	{
		cout << *i << " " ;
	}
	cout << "\n" << vec.at(4) << " ";
	
	//when you use cbegin and cend , you cant increase/decrease the iterator like this:
	//    *it = *it - 10;
	//    The basic difference between these two is iterator (i.e begin()) lets you change the value of the object it is pointing to and const_iterator will not let you change the value of the object.
	//    rbegin ,rend gives you order in reverse
	//    at(iterator) gives you element at that index
	//    front back works
	//  pop_back() removes last element
	
	    // inserts 5 at the beginning
	//      v.insert(v.begin(), 5);
    // removes the first element
	//    v.erase(v.begin());
//    v1.swap(v2);
//      gquiz2.erase(gquiz2.begin() , gquiz2.find(30));


}
