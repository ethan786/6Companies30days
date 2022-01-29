//Question Link-https://practice.geeksforgeeks.org/problems/first-non-repeating-character-in-a-stream1216/1#

//Question-Given an input stream of A of n characters consisting only of lower case alphabets. The task is to find the first non repeating character, each time a character is inserted to the stream. If there is no such character then append '#' to the answer.

//Solution-

class Solution {
	public:
	string FirstNonRepeating(string str){
        string ans = "";
        deque<char> dq;
        int hash[26]={0};
        
        for(auto it:str){
            int pos = it - 'a';
            
            if(hash[pos] == 0){
                dq.push_back(it);
            } 
            hash[pos]++;
            
            while(!dq.empty() and hash[dq.front() - 'a'] != 1) dq.pop_front();
            
            if(dq.empty()) ans += '#';
            else ans += dq.front();   
        }
        return ans;
	}
};
