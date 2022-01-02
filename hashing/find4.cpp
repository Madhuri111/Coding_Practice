#include<bits/stdc++.h>

using namespace std;

int main()
{
	vector<int> A={ 29, 10, -16, -7, 21, 17, 6, -8, 36, 23, -15};
	int B=52;
	  int n=A.size();

    unordered_map<int,vector<pair<int,int>>> g;

    vector<vector<int>> ans;
    for(int i=0;i<n;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            int sum=A[i]+A[j];
            int need=B-sum;

            if(g.find(sum)!=g.end())
            {

                vector<pair<int,int>> v=g[need];

                for(int k=0;k<v.size();k++)
                {
                    //should be unique first
                    if(i!=v[k].first && i!=v[k].second && j!=v[k].first && j!=v[k].second)
                    {
                        vector<int> temp={A[i],A[j],A[v[k].first],A[v[k].second]};
                        sort(temp.begin(),temp.end());
                        ans.push_back(temp);
			for(int l=0;l<4;l++)
				cout << temp[l] << endl;
                    }
		    cout << endl;
                }
            }

            g[sum].push_back(make_pair(i,j));
        }
    }

    sort(ans.begin(),ans.end());

      vector<vector<int>>::iterator ip=unique(ans.begin(), ans.end());
    ans.resize(std::distance(ans.begin(), ip));

    // ans.unique()
 //   return ans;
}
