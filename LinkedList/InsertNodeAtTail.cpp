SinglyLinkedListNode* insertNodeAtTail(SinglyLinkedListNode* head, int data) {

SinglyLinkedListNode *ne , *p;

ne   =    (SinglyLinkedListNode*)malloc(sizeof(SinglyLinkedListNode));
p    =    (SinglyLinkedListNode*)malloc(sizeof(SinglyLinkedListNode));
p->next = head;

ne->data = data;
ne->next = NULL;
if(!head)
{
head = ne;
}
else
{
while(p->next!=NULL)
{
p = p->next;
}
p->next = ne; 
}
  
return head;
}
