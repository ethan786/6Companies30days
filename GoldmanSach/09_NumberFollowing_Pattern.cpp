// Question Link - https://practice.geeksforgeeks.org/problems/number-following-a-pattern3126/1

//Question-Given a pattern containing only I's and D's. I for increasing and D for decreasing. Devise an algorithm to print the minimum number following that pattern. Digits from 1-9 and digits can't repeat.

//Solution -


class Solution{   
public:
    string printMinNumberForPattern(string S){
          string x = "";
        int i=0,j=0;
        int count=1;
        while(i<=S.size()){
            if(S[i]=='I' || i==S.size()){
                while(count>=1){
                    if(count<=j) break;
                    char ch = count + '0';
                    x.push_back(ch);
                    count--;
                }
                j = i+1;
                count = i+1;
            }
            count++;
            i++;
        }
        return x;
    }
};