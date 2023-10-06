class Solution
{
    public:
    void rearrange(struct Node *head)
    {
        if (!head || !head->next) {
            return;
        }
        Node* odd = head;
        Node* even = head->next;
        Node* evenHead = even;
        Node* current = head;
        Node* reversed = nullptr;
        while (even && even->next) {
            odd->next = even->next;
            odd = odd->next;
            even->next = odd->next;
            even = even->next;
        }
        odd->next = nullptr;
        while (evenHead) {
            Node* temp = evenHead;
            evenHead = evenHead->next;
            temp->next = reversed;
            reversed = temp;
        }
        odd->next = reversed;
    }
};