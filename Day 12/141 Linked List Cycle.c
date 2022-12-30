bool hasCycle(struct ListNode *head) { 
     if(head == NULL) return 0;
      struct ListNode *slow = head;
    struct ListNode*fast = head->next; 

    while(fast != NULL)
    {
        fast = fast -> next;

        if(fast != NULL)
        {
            slow = slow ->next;
            fast = fast ->next;
        } 
        if(slow == fast) return 1;
    } 
    return 0;
}
