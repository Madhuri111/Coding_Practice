#include <bits/stdc++.h>

using namespace std;



void findFloorSequence(string direction,int currentFloor,vector<int> floorRequests)
{

    if(direction!="UP" || direction!="DP")
    {
        cout << "Invalid input";
    }
    if (currentFloor < 0 || currentFloor >15)
    {
        cout << "Invalid input";
    }
    // int n=floorRequests.size();
    // sort(floorRequests,floorRequests+n, greater<int>());
        sort(floorRequests.begin(), floorRequests.end());

    // cout << floorRequests[0] << endl;
    int up=0;
    int down=0;
    vector<int> uup;
    vector<int> ddown;
    for (auto i = floorRequests.begin(); i != floorRequests.end(); ++i)
        if(direction == "UP")
        {
            if (currentFloor < (*i))
            {
                up=*i;
                uup.push_back(*i);
            }
        }
        if(direction == "DP")
        {
            
            if (currentFloor > (*i))
            {
                ddown.push_back(*i);
            }
        }
    }
    sort(ddown.begin(),ddown.begin(), greater<int>());


    

int main()
{
    vector<int> g1;

    for (int i = 5; i > 0; i--)
        g1.push_back(i);
    findFloorSequence("UP",3,g1);
}