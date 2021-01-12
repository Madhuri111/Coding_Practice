// C++ implementation of the approach 
#include <iostream> 
using namespace std; 

// Function to return 
//minimum number of nodes 
int AVLtree(int H, int a = 1, int b = 2) 
{ 
	// Base Conditions 
	if (H == 0) 
		return 1; 
	if (H == 1) 
		return b; 

	// Tail Recursive Call 
	return AVLtree(H - 1, b, a + b + 1); 
} 

// Driver Code 
int main() 
{ 
	int H = 5; 
	int answer = AVLtree(H); 

	// Output the result 
	cout << "n(" << H << ") = "
		<< answer << endl; 
	return 0; 
} 

