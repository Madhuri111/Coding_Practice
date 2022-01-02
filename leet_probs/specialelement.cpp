#include<bits/stdc++.h>
using namespace std;


// int perfectPeak(vector<int> &A) {
//     int n=A.size();

//     int cleft=INT_MIN;
//     int cright=INT_MAX;

//     //create 2 arrays leftmax and rightmin
//     // Traverse input array from left to right and fill leftMax[] such that leftMax[i] contains a maximum element from 0 to i-1 in the input array.
//     vector<int> leftMax;
//     // vector<int> rightMin;
//     leftMax[0] = INT_MIN;
//     for(int i=1;i<n;i++)
//     {
//             leftMax[i]=max(leftMax[i-1],A[i-1]);
//     }
//     for (int i=n-1; i>=0; i--)
//     {
//         if (leftMax[i] < A[i] && cright > A[i])
//         {
//             return 1;
//         }
//         cright=min(cright,A[i]);
//     }
//     return 0;    
// }

int main()
{
    vector<int> A={9488, 25784, 5652, 9861, 31311, 8611, 1671, 7129, 28183, 2743, 11059, 4473, 7927, 21287, 2259, 7214, 32529 };

    // cout << perfectPeak(A) << endl;
        int n=A.size();

    int cleft=INT_MIN;
    int cright=INT_MAX;

    //create 2 arrays leftmax and rightmin
    // Traverse input array from left to right and fill leftMax[] such that leftMax[i] contains a maximum element from 0 to i-1 in the input array.
    vector<int> leftMax(n+1);
    // vector<int> rightMin;
    leftMax[0] = INT_MIN;
            // cout << "hey" << endl;

    for(int i=1;i<n;i++)
    {
            leftMax[i]=max(leftMax[i-1],A[i]);
    }
    cout << leftMax[n] << endl;
    for (int i=n-1; i>=0; i--)
    {
        if (leftMax[i] < A[i] && cright > A[i])
        {
            cout << "hello " << endl;
        }
        cright=min(cright,A[i]);
    }
    return 0;
}
