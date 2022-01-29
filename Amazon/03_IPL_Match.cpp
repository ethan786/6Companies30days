//Question  Link - https://practice.geeksforgeeks.org/problems/deee0e8cf9910e7219f663c18d6d640ea0b87f87/1/

//Question - Due to the rise of covid-19 cases in India, this year BCCI decided to organize knock-out matches in IPL rather than a league. Today is matchday 2 and it is between the most loved team Chennai Super Kings and the most underrated team - Punjab Kings. Stephen Fleming, the head coach of CSK, analyzing the batting stats of Punjab. He has stats of runs scored by all N players in the previous season and he wants to find the maximum score for each and every contiguous sub-list of size K to strategize for the game.
  

// Solution - 

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
