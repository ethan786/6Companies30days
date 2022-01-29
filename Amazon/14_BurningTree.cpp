//Question Link- https://practice.geeksforgeeks.org/problems/burning-tree/1/

//Solution -


void traverse(Node *root,unordered_map<Node*,Node*> &parent,Node *pt)
    {
        if(!root)
        return;
        parent[root]=pt;
        traverse(root->left,parent,root);
        traverse(root->right,parent,root);
    }
    int tt=0;
    void burnit(unordered_map<Node*,Node*> &parent,unordered_map<Node*,bool> vis,Node *root,int val)
    {
        if(!root || vis[root])
        return;
        tt=max(tt,val);
        vis[root]=1;
        burnit(parent,vis,parent[root],val+1);
        burnit(parent,vis,root->left,val+1);
        burnit(parent,vis,root->right,val+1);
        
    }
    
    int minTime(Node* root, int target) 
    {
        unordered_map<Node*,Node*> parent;
        unordered_map<Node*,bool> vis;
        traverse(root,parent,NULL);
        for(auto x:parent)
        {
            if(x.first->data==target)
            {
                burnit(parent,vis,x.first,0);
                break;
            }
        }
        return tt;
    }
