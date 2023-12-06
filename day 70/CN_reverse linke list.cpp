LinkedListNode<int> *reverseLinkedList(LinkedListNode<int> *head) 
{
    // Write your code here
    LinkedListNode<int> *prev = nullptr;
    LinkedListNode<int> *current = head;
    LinkedListNode<int> *next = nullptr;

    while (current != nullptr)
    {
        next = current->next;
        current->next = prev;
        prev = current;
        current = next;
    }

    // Update the head to point to the new first node after reversing
    head = prev;

    return head;
}
