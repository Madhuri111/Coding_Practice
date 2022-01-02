#include<bits/stdc++.h>
using namespace std;

string simplifyPath(string A) {

    int n=A.size();

    stack<string> s;

    // if(A[0]=='/') s.push(A[0]);

    

    string word="";
    for(int i=0;i<n;i++)
    {
        word="";
        while(i<n && A[i]!='/')
        {
            word.push_back(A[i]);
            i++;
        }

        // cout << word << endl;

        if(word=="..")
        {
            if(!s.empty())
            {
                s.pop();
            }
        }
        else if(word=="." || word=="/");
        else{
            s.push(word);
        }

    }

    stack<string> temp;
    // string hey="";
    while(!s.empty())
    {
        // hey+=s.top()+"/";
        temp.push(s.top());
        s.pop();

    }
    // return hey;
    string hey="";
    while(!temp.empty())
    {

        if(temp.size()==1)
            hey+=temp.top();
        else
        {
            hey+=temp.top()+"/";
            
        }
        temp.pop();
    }
    if(hey=="")
        return "/";
    return hey;

}

int main()
{
    string k="/a/./b/../../c/";
    cout<<simplifyPath(k)<<endl;
}