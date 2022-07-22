ListNode* deleteDuplicates(ListNode* head) {
    if (!head || !head->next)
        return head;

    ListNode* now = head->next;
    ListNode* prev = head;
    while (now)
        if (now->val == prev->val)
        {
            prev->next = now->next;
            now = now->next;
        }
        else
        {
            prev = now;
            now = now->next;
        }

    return head;
}
