#include<bits/stdc++.h>
using namespace std;

int braces(string s) {
    stack<char> A;

    int n=s.size();

    for(int i=0;i<n;i++)
    {
        if(s[i]=='(')
        {
            A.push(s[i]);
        }
        else if( s[i]==')' ){
             

                cout << "he";

                A.pop();


        }
        // cout << A.top() << endl;
        // else if(s[i]==')')
        //     A.pop();
    }
    cout << A.size();
    if(A.empty()) return 0;
    else return 1;
}


int main()
{
    string hey="(a*b)+(b*c)";
    cout << braces(hey) << endl;
}