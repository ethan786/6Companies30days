class Solution{
  public:
    vector<vector<string>> Anagrams(vector<string>& s) {
        int n = s.size();
        map<string,vector<string>> m;
        for(auto i : s){
            string x = i;
            sort(x.begin(),x.end());
            m[x].push_back(i);
        }
        vector<vector<string>> ans;
        for(auto i : m){
            ans.push_back(i.second);
        }
        return ans;
    }
};
