//Question - https://practice.geeksforgeeks.org/problems/squares-in-nn-chessboard1801/1

//Question- Find total number of Squares in a N*N cheesboard.

//Solution-

class Solution {
  public:
    long long squaresInChessBoard(long long N) {
        
         return (N*(N+1)*(2*N+1))/6;;
    }
};