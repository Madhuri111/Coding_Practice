#include<bits/stdc++.h>
using namespace std;

int main()
{	
	string s;
	getline(cin,s);
	int prev=-1;
	for(int i=0;i<s.length();++i)
	{
		if(isdigit(s[i]))
		{
			int answer=s[i++]-'0';
			// int store=;

			if( i < s.size() && isdigit(s[i]))
			{
				answer=answer*10+s[i++]-'0';
				
			}
		if(prev>=answer)
		{
			// cout << "no" ;
			return false;
		}

		prev=answer;
			
		}	
		
	}
	return true;
}