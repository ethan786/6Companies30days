//Question Link- https://practice.geeksforgeeks.org/problems/column-name-from-a-given-column-number4244/1/

//Question - Given a positive integer, return its corresponding column title as appear in an Excel sheet. Excel columns has a pattern like A, B, C, … ,Z, AA, AB, AC,…. ,AZ, BA, BB, … ZZ, AAA, AAB ….. etc. In other words, column 1 is named as “A”, column 2 as “B”, column 27 as “AA” and so on.

//Solution -

class Solution{
    public:
    string colName (long long int n)
    {
        string s = "";
        while(n != 0) {
            
            n--;
            int r = n % 26;
            s = string(1, r + 'A') + s;
            n = n / 26;
        }
        return s;
    }
};
