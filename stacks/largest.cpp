#include<bits/stdc++.h>
using namespace std;

int func(vector<int> &A) {

    int max_element=0;

    stack<int> hist;
    cout << A.size() << endl;
    int i;
    cout << i << "shv" ;
    int n=A.size();
    while(i<A.size())
    {
	    cout << "heyy";
        if(hist.empty() || A[i]>A[hist.top()])
        {
            hist.push(i++);
        }
        else
        {
            int store=hist.top();
            hist.pop();

            int k;
            if(!hist.empty())
            {
                int width=hist.top()-i+1;
                k=A[i]*(width);
            }
            max_element=max(k,max_element);

        }
    }
    while(!hist.empty())
    {
        int store=hist.top();
            hist.pop();

            int k;

                int width=hist.top()-i+1;
                k=A[i]*(width);

            max_element=max(k,max_element);

            cout << max_element << endl;


    }

    return max_element;

}

int main()
{
    cout << "hey" ;
	vector<int> A={1};
	cout << func(A) << endl;
}
