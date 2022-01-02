

int Solution::repeatedNumber(const vector<int> &A) {
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details
    // int hey=2147483647;
    // vector<int> v(hey, 0);
    int n=A.size();
    unordered_map<int, int> m;
    for(int i = 1; i <= n; i++)
        m[A[i-1]]++;
    int count = 0;
    for(auto i : m)
    {
        if(i.second > n / 3)
        {
            count =1;
            // cout << "Majority found :- " << i.first<<endl;
            return i.first;
            break;
        }
    }
    if(count == 0)
        return -1;
        // cout << "No Majority element" << endl;

}
