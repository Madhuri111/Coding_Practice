#include<iostream>
#include<map>
#include<iterator>
using namespace std;

int main()
{
	//operations allowed:
	//begin,end,size,max_size,empty(),pair_insert,erase(iterator position),erase(constant g) removes key value g from map,clear -removes all
	map<int,char> hello;
	hello.insert(pair<int,char>(1,"c"));
	hello.insert(pair<int,char>(2,"h"));
	hello.insert(pair<int,char>(3,"e"));
	hello.insert(pair<int,char>(4,"f"));

	for(auto i=hello.begin();i!=hello.end();i++)
	{
		cout << "Hello" <<  "  " << i->first << "  " << i->second << "\t" ;
	}
	cout << "\n" ;
	map<int,int> hey(hello.begin(),hello.end());
	int num;
	num=hey.erase(3);
	cout << num << "";
	for(auto i=hey.begin();i!=hey.end();i++)
	{
		cout << "Hello" <<  "  " << i->first << "  " << i->second << "\t" ;
	}
	//there are many other functions for mapp
	//map_insert()
	//map_count()
	//map_equal_range ??
	//map_erase()
	//map_find() -returns iterator to element with key value g in map if found
	//map_emplace()
	//map_max_size()
	//
}
