class Solution {
    
    int lis(vector<int> &a)
    {
        if(a.size() == 0)
            return 0;
        // assert(a.size() > 0);
        vector<int> temp;
        
        // temp.push_back(a[0]);
        
        for(auto &val : a)
        {
            if(temp.size()==0 || val > temp.back())
                temp.push_back(val);
            else
            {
                auto it = lower_bound(temp.begin(),temp.end(),val);
                
                if(it == temp.end()) continue;
                
                int idx = it - temp.begin();
                
                // assert(idx < temp.size());
                
                temp[idx] = val;
            }
        }
        
        return temp.size();
    }
    
  public:
    int minInsAndDel(int A[], int B[], int N, int M) {
        vector<int> a;
        unordered_set<int> st;
        for(int i=0;i<M;i++) st.insert(B[i]);
        
        int steps = 0;
        
        for(int i=0;i<N;i++)
        {
            if(st.count(A[i])==1)
                a.push_back(A[i]);
            else
                steps++;
        }
        
        int sz = lis(a);
        
        return steps + (a.size() - sz) + (M - sz);
    }
};