bool has_cycle(SinglyLinkedListNode* head) {
    if(head == NULL || head -> next == NULL)
        return false;

    SinglyLinkedListNode *first = head;
    SinglyLinkedListNode *second = head;

    while (first -> next && first -> next -> next) {
        first = first -> next -> next;
        second = second -> next;
        if(first == second)
            return true;
    }
    return false;
}
