SinglyLinkedListNode* insertNodeAtHead(SinglyLinkedListNode* llist, int data) {
    SinglyLinkedListNode* p = new SinglyLinkedListNode(data);
    p->next=llist;
    llist = p;
    return llist;

}
