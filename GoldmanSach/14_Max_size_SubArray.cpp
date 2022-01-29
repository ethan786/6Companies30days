//Question Link- https://leetcode.com/problems/minimum-size-subarray-sum/

//Question- Given an array of positive integers nums and a positive integer target, return the minimal length of a contiguous subarray [numsl, numsl+1, ..., numsr-1, numsr] of which the sum is greater than or equal to target. If there is no such subarray, return 0 instead.


//Solution -

class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int windowStart = 0;
        int windowEnd = 0;
        int n = nums.size();
        int sum = 0;
        int ans = INT_MAX;
        while (windowEnd < n)
        {
            sum += nums[windowEnd];
            if (sum < target)
            {
                windowEnd++;
            }
            else if (sum >= target) // if the condition is fulfilled
            {

                while (sum >= target)
                {
                    ans = min(ans, (windowEnd - windowStart + 1)); 
                    sum -= nums[windowStart];                      
                    windowStart++;
                }
                windowEnd++;
            }
        }
        if (ans == INT_MAX || ans < 0)
            return 0;
        return ans;
    }
};