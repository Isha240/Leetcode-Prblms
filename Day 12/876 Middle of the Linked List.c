typedef struct ListNode Node; 
struct ListNode* middleNode(struct ListNode* head){
    
    Node *slow = head;
    Node*fast = head->next;

    while(fast != NULL)
    {
        fast = fast -> next;

        if(fast != NULL) 
        {
            slow = slow -> next;
            fast = fast -> next;
       } 
       else 
         slow = slow -> next; 
    } 
    return slow;
}
