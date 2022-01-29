//Question Link- https://practice.geeksforgeeks.org/problems/phone-directory4628/1/

//Question - Given a list of contacts contact[] of length n where each contact is a string which exist in a phone directory and a query string s. The task is to implement a search query for the phone directory. Run a search query for each prefix p of the query string s (i.e. from  index 1 to |s|) that prints all the distinct contacts which have the same prefix as p in lexicographical increasing order. Please refer the explanation part for better understanding.

//Solution -

class Solution{
public:
   vector<vector<string>> displayContacts(int n, string contact[], string s)
   {
     
      int i;string t="";  vector<vector<string>> ans;
      for(i=0;i<s.size();i++)
      {
         t+=s[i];
          vector<string> v;
          set<string> st;
         for(int j=0;j<n;j++)
         {
             int l=contact[j].find(t);
             if(l==0)
             {
                 st.insert(contact[j]);
             }
           
         }
        if(!st.empty())
         {
             for(auto it:st)
             {
                 v.push_back(it);
             }
              ans.push_back(v);
         }
        else
        {
            v.push_back("0");
            ans.push_back(v);
        }
      }
     return ans;
   }
};
