class Solution
{
    public:
    Node* pairWiseSwap(struct Node* head) 
    {
        // The task is to complete this method
        if(head==NULL or head->next==NULL)
            return head;
        Node* temp=head->next;
        head->next=pairWiseSwap(temp->next);
        temp->next=head;
        
        return temp;
    }
};