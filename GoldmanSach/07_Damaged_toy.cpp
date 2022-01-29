//Question Link - https://practice.geeksforgeeks.org/problems/find-the-position-of-m-th-item1723/1

//Question- M items are to be delivered in a circle of size N. Find the position where the M-th item will be delivered if we start from a given position K. Note that items are distributed at adjacent positions starting from K.

//Soltuion-

int findPosition(int N , int M , int K) {
        K+=M-1;
        K=K%N;
        if(!K)
        return N;
        return K;
}
