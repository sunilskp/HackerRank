SinglyLinkedListNode* insertNodeAtHead(SinglyLinkedListNode* llist, int data) {
SinglyLinkedListNode* temp =(SinglyLinkedListNode*)(malloc(sizeof(SinglyLinkedListNode))) ;
temp->data =data;
temp->next= NULL;
if(llist==NULL)
{
    llist=temp;
}
else
{
temp->next = llist;
llist = temp;
}
 
return llist;
}

