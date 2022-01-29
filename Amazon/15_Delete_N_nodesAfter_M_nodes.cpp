//Question Link- https://practice.geeksforgeeks.org/problems/delete-n-nodes-after-m-nodes-of-a-linked-list/1/

//Question - Given a linked list, delete N nodes after skipping M nodes of a linked list until the last of the linked list.

//Solution -

class Solution
{
    public:
    void linkdelete(struct Node  *head, int M, int N)
    {
        Node* curr=head;int c=0;int i,l=0;Node* prev;
       while(curr!=NULL)
       {
           for(i=0;i<M&&curr!=NULL;i++)
           {
               prev=curr;
               curr=curr->next;
           }
           for(i=0;i<N&&curr!=NULL;i++)
           {
               curr=curr->next;
           }
           prev->next=curr;
       }
    }
};
