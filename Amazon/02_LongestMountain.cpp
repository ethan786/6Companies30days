//Question Link- https://leetcode.com/problems/longest-mountain-in-array/

//Question :Given an integer array arr, return the length of the longest subarray, which is a mountain. Return 0 if there is no mountain subarray.

//Solution -

class Solution {
public:
    int longestMountain(vector<int>& arr) {
        if(arr.size() < 3){
            return 0;
        }
        
        int i,ans=0,c=0,n=arr.size();
        for(i=1;i<n;i++)
        {
            if(arr[i]==arr[i-1])  
                c=0;            
            else if(arr[i]>arr[i-1]) 
                c++;
            
            else if(c>0)           
            {
                    while(i<n and arr[i]<arr[i-1])
                    {
                        c++; i++;
                    }
                    ans = max(ans,c+1);
                    c=0 ;i--;
            }
        }
        return ans;
        
    
    }
};


