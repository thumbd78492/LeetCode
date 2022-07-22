ListNode* reverseList(ListNode* head) {
    if (!head || !head->next)
        return head;

    ListNode *prev = head, *now = head->next;
    head->next = nullptr;
    while (now->next)
    {
        ListNode *t = now->next;
        now->next = prev;
        prev = now;
        now = t;
    }
    now->next = prev;

    return now;
}
