//Question Link - https://practice.geeksforgeeks.org/problems/count-the-subarrays-having-product-less-than-k1708/1

//Question -Given an array of positive numbers, the task is to find the number of possible contiguous subarrays having product less than a given number k.


//Solution-

class Solution{
  public:
    int countSubArrayProductLessThanK(const vector<int>& a, int n, long long k) {
        
        long long sum=0,pro=1;
        for(int i=0,x=0;i<n;i++)
        {
            pro*=a[i];
            while(pro>=k)
            {
                pro/=a[x++];
            }
            if(x<=i)
            {
                sum+=(i-x+1);
            }
        }
        return sum;
    }
};