int minSwaps(vector<vector<int>>& grid) {
        const int n = grid.size();
        vector<int> t(n); //t[i]: tailing zero count for i-th row        
        for(int i=0;i<n;i++){
            int count = 0;
            for(int j = n;--j>=0 && !grid[i][j]; )  count++;                
            t[i] = count;
        }
        int ans = 0;        
        for(int i=0;i< n;i++){
            int k = i;
            int req = n-1 - i; // desired tailing zero count
            while(k<n && t[k]<req) k++; // greedily find first swaping candidate and log the result into k. Note1
            if(k==n) return -1; // k is out of range. Fail in searching

            //Core part of the question: moving up k-th row up, moving down [i, k-1
            //Part 1: move k-th row up to i-th row
            ans += k-i; // accumulate the operation cost of moving k to i
            
            //Part 2: move the rest involved row downward by offset 1
            while(k>i){ // simulate swaping operation of two adjacent rows in range of [i, k-1 ]
                t[k] = t[k-1];
                k--;
            }
        }    
        
        return ans;
    }