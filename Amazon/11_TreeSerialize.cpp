// Question Link - https://practice.geeksforgeeks.org/problems/serialize-and-deserialize-a-binary-tree/1

//Question - Serialization is to store a tree in an array so that it can be later restored and Deserialization is reading tree back from the array. Now your task is to complete the function serialize which stores the tree into an array A[ ] and deSerialize which deserializes the array to the tree and returns it.

//solution -

class Solution
{
   public:
   //Function to serialize a tree and return a list containing nodes of tree.
   vector<int> serialize(Node *root) 
   {
       //Your code here
       vector<int> v;
       if(root==NULL)
       {
           v.push_back(-1);
           return v;
       }
       serialize(root->left);
       cout<<root->data<<" ";
       serialize(root->right);
   }
   
   //Function to deserialize a list and construct the tree.
   int i=0;
   Node * deSerialize(vector<int> &A)
   {
      //Your code here
      if(A.size()==0) return NULL;
      if(A[i]==-1) 
      {
          i++;
          return NULL;
      }
      Node* root=new Node(A[i++]);
      root->left=deSerialize(A);
      root->right=deSerialize(A);
      return root;
   }

};
