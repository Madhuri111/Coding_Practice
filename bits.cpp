#include<bits/stdc++.h>

using namespace std;

int main()
{
    // For any number, we can check whether its ‘i’th bit is 0(OFF) or 1(ON) by bitwise ANDing it with “2^i” (2 raise to i). 
    bitset<8> b(5);
    bitset<8> a(7);
    cout << b << "," << a << endl;
    int k=5|7;
    bitset<8> c(k);
    cout << c << endl;

}

    int countMaxOrSubsets(vector<int>& A) {
        int max = 0, dp[1 << 17] = {1};
        for (int a: A) {
            for (int i = max; i >= 0; --i)
                dp[i | a] += dp[i];
            max |= a;
        }
        return dp[max];
    }

    https://leetcode.com/problems/count-number-of-maximum-bitwise-or-subsets/discuss/1525216/C%2B%2B-Bitmask-%2B-DP

    https://leetcode.com/problems/second-minimum-time-to-reach-destination/