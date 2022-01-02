
#include<bits/stdc++.h>
using namespace std;

//  * Definition for an interval.
 
 struct Interval {
      int start;
      int end;
      Interval() : start(0), end(0) {}
      Interval(int s, int e) : start(s), end(e) {}
  };
 
/**
 * Definition for an interval.
 * struct Interval {
 *     int start;
 *     int end;
 *     Interval() : start(0), end(0) {}
 *     Interval(int s, int e) : start(s), end(e) {}
 * };
 */
bool compare(Interval A,Interval B) 
{
    return A.start < B.start;
}

vector<Interval> merge(vector<Interval> &A) {
   

    int n=A.size();
    //  cout<<A[0].start<<endl;
    sort(A.begin(),A.end(),compare);
    int i=1;
    
    int j=0;
    while(i<n && j<n)
    {
        // vector<Interval> temp;
        // temp[0].start=A[i].start;
        // cout<<A[i].start << " "<< A[j].end<<endl;
        if(A[i].start<=A[j].end)
        {
            A[j].start=min(A[i].start,A[j].start);
            A[j].end=max(A[i].end,A[j].end);
        }
        else
        {
            // cout<<"***"<<endl;
            j++;
            A[j]=A[i];
        }
        i++;
    }

    // cout << j << endl;
        // vector<Interval> newArr;/
            A.erase(A.begin() + j + 1, A.end());

            return A;

    // int a,b;
    // for(int k=0;k<=j;k++)
    // {

    //     a=A[k].start;
    //     b=A[k].end;
    //     newArr.push_back(Interval(a,b));


    //     // cout << newArr[k].start << newArr[k].end<< endl;
    // }
    // return newArr;
    // for(int k=0;k<=j;k++)
    // {
    //     newAr.push_back(newArr[k]);

    //     // cout << newArr[k].start << " "<< newArr[k].end<< endl;
    // }    return newAr;
}


int main()
{
    // vector<Interval> hey{{  (4, 100), (48, 94), (16, 21), (58, 71), (36, 53), (49, 68), (18, 42), (37, 90), (68, 75), (6, 57), (25, 78), (58, 79), (18, 29), (69, 94), (5, 31), (10, 87), (21, 35), (1, 32), (7, 24), (17, 85), (30, 95), (5, 63), (1, 17), (67, 100), (53, 55), (30, 63), (7, 76), (33, 51), (62, 68), (78, 83), (12, 24), (31, 73), (64, 74), (33, 40), (51, 63), (17, 31), (14, 29), (9, 15), (39, 70), (13, 67), (27, 100), (10, 71), (18, 47), (48, 79), (70, 73), (44, 59), (68, 78), (24, 67), (32, 70), (29, 94), (45, 90), (10, 76), (12, 28), (31, 78), (9, 44), (29, 83), (21, 35), (46, 93), (66, 83), (21, 72), (29, 37), (6, 11), (56, 87), (10, 26), (11, 12), (15, 88), (3, 13), (56, 70)}};

    vector<Interval> hey{ {1,3},{2,6},{8,10},{15,18}};
        vector<Interval> hello=merge(hey);

    for(int i=0;i<3;i++)
    {
        cout << hello[i].start << hello[i].end << endl;
    }
}