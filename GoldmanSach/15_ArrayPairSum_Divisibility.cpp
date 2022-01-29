//Question Link - https://practice.geeksforgeeks.org/problems/array-pair-sum-divisibility-problem3257/1

//Question- Given an array of integers and a number k, write a function that returns true if given array can be divided into pairs such that sum of every pair is divisible by k.


//Solution-



class Solution {
  public:
    bool canPair(vector<int> nums, int k) {
        map<int,int>m;
       int n=nums.size();
       for(int i=0;i<n;i++){
           m[nums[i]%k]++;
       }
       for(int i=0;i<n;i++){
           int r=nums[i]%k;
           if(r==0){
               if(m[0]&1)return 0;
           }
           else if(m[r]!=m[k-r])return 0;
       }
       return 1;

    }
};