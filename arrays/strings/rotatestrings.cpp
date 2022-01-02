#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s="ABCD";
    string ss="CDAB";
    if(s.length()!=ss.length())
    {
        cout << "Not possible" << endl;
    }

    string temp=s+s;
    cout << temp << "here" << ss << endl;
    cout << temp.find(ss) << endl;
// initial npos value will be -1 if it is still the same then not found
    if(temp.find(ss)!=string::npos)
    {
        cout << " possible" << endl;
    }
    else
                cout << " not possible" << endl;

}