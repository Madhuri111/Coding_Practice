int n = s.size();
        int i = 0;
        vector<int> v;
        while(i < n)
        {
            int ans = 0;
            while(i < n && s[i] >= '0' && s[i] <= '9')
            {
                ans = ans * 10 + s[i++]-'0';
            }
            if(ans > 0)
            {
                v.push_back(ans);
            }
            i++;
        }
        for(int a = 1; a < v.size(); a++)
        {
            if(v[a] <= v[a-1])
                return false;
        }
        return true;


        