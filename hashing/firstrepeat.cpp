#include<bits/stdc++.h>
using namespace std;

int main()
{
	vector<int> A={10, 5, 3, 4, 3, 5, 6};
	    int n=A.size();
    unordered_map<int,int> g;
    for(int i=0;i<n;i++)
    {
        g[A[i]]++;
    }

    int min_index=INT_MAX;
    for(int i=0;i<n;i++)
    {
        if(g[A[i]]>1)
        {
		cout << A[i] << " " << min_index << endl;
            min_index=min(min_index,i);
        }
    }

    cout << A[min_index];

}
