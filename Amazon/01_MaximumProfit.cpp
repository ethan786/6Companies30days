//Question Link - https://practice.geeksforgeeks.org/problems/maximum-profit4657/1

//Question - In the stock market, a person buys a stock and sells it on some future date. Given the stock prices of N days in an array A[ ] and a positive integer K, find out the maximum profit a person can make in at-most K transactions. A transaction is equivalent to (buying + selling) of a stock and new transaction can start only when the previous transaction has been completed.

//Solution -

class Solution {
  public:
    int maxProfit(int K, int N, int A[]) {
         int dp[K+1][N];
        memset(dp,0,sizeof(dp));
        for(int i=1;i<=K;i++){
            int max1=INT_MIN;
            for(int j=1;j<N;j++){
                if(dp[i-1][j-1]-A[j-1]>max1){
                    max1=dp[i-1][j-1]-A[j-1];
                }
                if(max1+A[j]>dp[i][j-1]){
                    dp[i][j]=max1+A[j];
                }
                else{
                    dp[i][j]=dp[i][j-1];
                }
            }
        }
        return dp[K][N-1];
    }
};
