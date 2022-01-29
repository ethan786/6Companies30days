//Question Link - https://practice.geeksforgeeks.org/problems/maximum-of-all-subarrays-of-size-k3101/1

//Question - Given an array arr[] of size N and an integer K. Find the maximum for each and every contiguous subarray of size K.

//Solution -


class Solution {
  public:
    vector<int> max_of_subarrays(vector<int> arr, int n, int k) {
        multiset<int> st;
       vector<int> ans;
       
       for(int i=0; i<k; i++){
           st.insert(arr[i]);
       }
       
       ans.push_back(*st.rbegin());
       
       for(int i=k; i<n; i++){
           st.erase(st.find(arr[i-k]));
           st.insert(arr[i]);
           
           ans.push_back(*st.rbegin());
       }
       
       return ans;
    }
};
