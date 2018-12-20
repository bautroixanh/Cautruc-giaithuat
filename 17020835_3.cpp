SinglyLinkedListNode* deleteNode(SinglyLinkedListNode* head, int position) {
    SinglyLinkedListNode *temp=head;
    if(position == 0){
        head = head->next;        
        return head;
    }
    SinglyLinkedListNode *temp2 = head;
    for(int i = 0 ; i < position-1; i++){
        temp2 = temp2->next;              
    }
      temp = temp2->next->next;
      temp2->next = temp;    
    return head;

}
