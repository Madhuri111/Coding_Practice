#include<bits/stdc++.h>

using namespace std;

const int MAX = 100;


int binary(vector<vector<int>> A,int siz,int element,int pos)
{
    int l=0;int r=siz-1,mid;
    while(l<=r)
    {
        mid=(r+l)/2;
        if(A[pos][mid]==element)
        {
            return 1;
        }
        if(A[pos][mid]>element)
        {
            r=mid-1;
        }
        if(A[pos][mid]<element)
        {
            l=mid+1;
        }
    }
    return 0;
}

int searchMatrix(vector<vector<int> > &A, int B) {

    int n=A.size();
    int l=0,r=n-1;
    int m=A[0].size();

    while(l<=r)
    {
        int mid=(l+r)/2;
        int temp=A[mid][0];
        int te=A[mid][m-1];

        cout << temp << endl;
        if(B==temp)
            return 1;
        if(B==te)
            return 1;
        if(B<te && B>temp)
            return binary(A,m,B,mid);
        if(B>te)
        {
                        l=mid+1;

        }
        if(B<temp)
        {
                        r=mid-1;

        }

    }

    return 0;



}

int main()
{
	int n = 7; // no. of rows
	int m = 5; // no. of columns

	vector<vector<int>> vect {{3, 3, 11, 12, 14},
                    {16, 17, 30, 34, 35},
                    {45, 48, 49, 50, 52},
                    {56, 59, 63, 63, 65},
                    {67, 71, 72, 73, 79},
                    {80, 84, 85, 85, 88},
                    {88, 91, 92, 93, 94}};

	int k = 94; // element to search


	searchMatrix(vect, k);
	
	return 0;
}

