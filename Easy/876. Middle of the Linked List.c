struct ListNode* middleNode(struct ListNode* head){
    struct ListNode* n1 = head;
    struct ListNode* n2 = head;
    while (n2 != NULL && n2->next != NULL) {
        n1 = n1->next;
        n2 = n2->next->next;
    }
    return n1;
}
