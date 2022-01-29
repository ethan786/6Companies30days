//Question Link- https://practice.geeksforgeeks.org/problems/print-anagrams-together/1/

//Question :Given an array of strings, return all groups of strings that are anagrams. The groups must be created in order of their appearance in the original array.

//Solution -


class Solution{
  public:
    vector<vector<string> > Anagrams(vector<string>& string_list) {
        vector<vector<string> > v;
        
        unordered_map<string , int>m;
        for(int i=0;i<string_list.size();i++){
            string s=string_list[i];
            sort(s.begin(),s.end());
            if(m.find(s)==m.end()){
                vector<string>k;
                v.push_back(k);
                m[s]=v.size();
                
            }
            v[m[s]-1].push_back(string_list[i]);
        }
        return v;
    }
};
