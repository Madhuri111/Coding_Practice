
#include<bits/stdc++.h>
using namespace std;

//  * Definition for an interval.
 
 struct Interval {
      int start;
      int end;
      Interval() : start(0), end(0) {}
      Interval(int s, int e) : start(s), end(e) {}
  };
 
bool compare(Interval a,Interval b){

if(a.start>=b.start) return 0;

}

vector<Interval> merge(vector<Interval> &A) {
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details

    int n=A.size();
    //  cout<<A[0].start<<endl;
    sort(A.begin(),A.end(),compare);
    // for(int i=0;i<n;i++) cout<<A[i].start<<endl;
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
                A.erase(A.begin() + j + 1, A.end());

            return A;
    vector<Interval> newArr;
    int a,b;
    for(int k=0;k<=j;k++)
    {

        a=A[k].start;
        b=A[k].end;
        // cout << "ej" << endl;
        newArr.push_back(Interval(a,b));


        // cout << A[k].start << A[k].end<< endl;
    }
    for(int i=0;i<n;i++)

    // vector<Interval> newAr(j+1);

    // for(int k=0;k<=j;k++)
    // {
    //     newAr.push_back(newArr[k]);

    //     // cout << newArr[k].start << " "<< newArr[k].end<< endl;
    //     // cout << newAr[k] << endl;
    // }    
    return newArr;
}

int main()
{
    vector<Interval> hey{ {1,3},{2,6},{8,10},{15,18}};

    vector<Interval> hello=merge(hey);
    for(int i=0;i<3;i++)
    {
        cout << hello[i].start << hello[i].end << endl;
    }
}