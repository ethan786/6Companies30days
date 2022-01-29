//Question Link - https://practice.geeksforgeeks.org/problems/find-missing-and-repeating2512/1/

//Question-Given an unsorted array Arr of size N of positive integers. One number 'A' from set {1, 2, …N} is missing and one number 'B' occurs twice in array. Find these two numbers.


//Solution-

class Solution{
public:
    int *findTwoElement(int *arr, int n) {
        sort(arr,arr+n);
       int *ans= new int[2];
       long long s1=arr[n-1],s2=n;
       for(int i=0;i<n-1;i++){
           if(arr[i]==arr[i+1]){
               ans[0]=arr[i];
           }
           s1+=arr[i];
           s2+=i+1;
       }
       ans[1]=s2 - (s1 -ans[0]);
      return ans;
    }
};