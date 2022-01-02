// { Driver Code Starts
//Initial template for C++ 
 
#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends


//User function template for C++

void lps(string s) {
	    // Your code goes here
	    
	    int index=0;
	    int n=s.size();
	    vector<int> lpsv(n+1);
	    lpsv[0]=0;
	    int len=0;
		int i=1;
	    while(i<s.size())
	    {
	        if(s[i]==s[len])
	        {
	            len++;
	           lpsv[i]=len;
	           i++;
	        }
	        else
	        {
	            //when there is mismatch
	            if(len!=0)
	            {
	                len=lpsv[i-1];
	            }
	            else
	            {
	                lpsv[i]=0;
	                i++;
	            } 
	        }
	       // index++;
	    }
		for(int i=0;i<=2;i++)
		{
			cout << lpsv[i] << endl;
		}
		// return lps[2];
    }



int main()
{
    string s="AAA";
	// Solution k;
	// cout << lps(s) << endl;
	lps(s);
}