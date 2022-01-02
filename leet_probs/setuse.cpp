#include<bits/stdc++.h>
#include<iostream>
#include<set>
using namespace std;

int main()
{
    // Sets are a type of associative containers in which each element has to be unique, because the value of the element identifies it. The value of the element cannot be modified once it is added to the set, though it is possible to remove and add the modified value of that element. 
    // greater int can be used for changing the functionality of the given function.
    set<int, greater<int> > s1;

    //can define as set<int,int> s1; if you dont want highest elements to be first
    s1.insert(40);
    s1.insert(30);
    s1.insert(50);
    set<int, greater<int> >::iterator itr;
    for (itr = s1.begin(); itr != s1.end(); itr++)
    {
        cout << *itr<<" ";
    }
    cout << endl;

    //below line for assigning s1 elements into s2
    set <int> s2(s1.begin(),s1.end());

    //below for erasing elements
    s2.erase(50);

    // below for erasing elements less than 30
    s2.erase(s2.begin(), s2.find(30));

    //for lower bound
    auto it=s1.upper_bound(40); //gives you 40 ,so if you really want lower bound you can do --
    ++it;
    cout << *it << endl;

    //upper bound means max in right side and lower bound is max in left side(it gives answers as itself mostly)
}

Tutorial and Example:

The set s1 is : 
60 50 40 30 20 10 

The set s2 after assign from s1 is : 
10 20 30 40 50 60 

s2 after removal of elements less than 30 :
30 40 50 60 
s2.erase(50) : 1 removed
30 40 60 
s1.lower_bound(40) : 
40
s1.upper_bound(40) : 
30
s2.lower_bound(40) :
40
s2.upper_bound(40) : 
60