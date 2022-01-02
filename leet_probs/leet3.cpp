#include<bits/stdc++.h>

using namespace std;

int main()
{
    // For any number, we can check whether its ‘i’th bit is 0(OFF) or 1(ON) by bitwise ANDing it with “2^i” (2 raise to i). 
    bitset<8> b(5);
    bitset<8> a(7);
    cout << b << "," << a << endl;
    int k=3|2|1|5;
    bitset<8> c(k);
    cout << c << "," << k << endl;
}