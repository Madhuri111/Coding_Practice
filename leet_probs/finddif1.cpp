int Solution::solve(vector<string> &A) {
    int n=A.size();

    int sum_ending_here,sum_so_far=0;
    // int sum_ending_here=
        vector<float> v;
    for (int i = 0; i < n; i++) {
        v.push_back(stof(A[i]));
    }
    int a=v[0];
    int b=v[1];
    int c=v[2];
    int flag=0;
    for(int i=3;i<n;i++)
    {
        if(a+b+c>1 && a+b+c<2)
        {
            return 1;
        }
        else if (a + b + c > 2) {
            if (a > b && a > c)
                a = v[i];
            else if (b > a && b > c)
                b = v[i];
            else
                c = v[i];
        } else {
            if (a < b && a < c)
                a = v[i];
            else if (b < a && b < c)
                b = v[i];
            else
                c = v[i];
        }
    }    if (a + b + c > 1 && a + b + c < 2)
        return 1;
    else
        return 0;
}

