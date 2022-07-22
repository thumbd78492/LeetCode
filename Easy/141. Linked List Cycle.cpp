bool hasCycle(ListNode *head) {
    while(head)
    {
        ListNode *tmp = head->next;
        head->next = head;
        head = tmp;
        if (head && head->next == head) return true;
    }
    return false;
}
