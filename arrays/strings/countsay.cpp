#include<bits/stdc++.h>
// #include<map>
using namespace std;

string countAndSay(int A) {

    // vector<string> cur;

    // cur[0]="1";
    // cur[1]='11';

    int n,count=1;

    // temp;

    if(A==1) return "1";
    if(A==2) return "11";

    string s="11";

    for(int j=3;j<=A;j++)
    {

        s+='$';
        // count++;
        int haha=1;
        // string store=cur[count-1];
        string temp="";

        for(int i=1;i<s.length();i++)
        {
            
            // if(store[i-1]!=store[i] && store[i]!=store[i+1])
            // {
            //     temp="1" + store[i];
            //     break;
            // }
            cout << temp << endl;
            if(s[i]!=s[i-1])
            {
                                      cout << s[i-1] << " " << s[i] << " before" << j << endl;

            cout << temp << "=" << endl;

                temp+=haha+'0';
                            cout << temp << "==" << endl;

                temp+=s[i-1];
                            cout << temp << "===" << endl;

                haha=1;
                                                      cout << temp << " after" << j << endl;


            }
            else
                  haha++;
        }
       s=temp;
    }

    return s;
}


int main()
{
    cout << countAndSay(4) ;
}