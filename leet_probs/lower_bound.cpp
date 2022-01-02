// C++ program to find maximum triplet sum
#include <bits/stdc++.h>
using namespace std;

// Utility function to get the lower last min
// value of 'n'
// int getLowValue(set<int>& lowValue, int& n)
// {
// 	auto it = lowValue.lower_bound(n);

// 	// Since 'lower_bound' returns the first
// 	// iterator greater than 'n', thus we
// 	// have to decrement the pointer for
// 	// getting the minimum value
// 	--it;

// 	return (*it);
// }

int main()
{
    int arr[6]={2,5,1,3,4,9};
    int n=6;
    auto it=arr.lower_bound(3);
    cout << (*it) << endl;
}