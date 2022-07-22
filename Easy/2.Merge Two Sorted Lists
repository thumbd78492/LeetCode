ListNode* mergeTwoLists(ListNode* l1, ListNode* l2) {
    if (!l1)
        return l2;
    if (!l2)
        return l1;

    if (l1->val > l2->val)
        swap(l1, l2);
    ListNode* head = l1;

    while (l2)
    {
        if (l1->next)
        {
            if (l1->next->val > l2->val)
            {
                ListNode* t = l1->next;
                l1->next = l2;
                l2 = l2->next;
                l1->next->next = t;
            }
            else
                l1 = l1->next;
        }
        else
        {
            ListNode* t = l1->next;
            l1->next = l2;
            l2 = l2->next;
            l1->next->next = t;
        }
    }

    return head;
}
