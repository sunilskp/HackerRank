SinglyLinkedListNode* insertNodeAtTail(SinglyLinkedListNode* head, int data) {

SinglyLinkedListNode *news , *p;

news = (SinglyLinkedListNode*)malloc(sizeof(SinglyLinkedListNode));
p     = (SinglyLinkedListNode*)malloc(sizeof(SinglyLinkedListNode));
p->next = head;

news->data = data;
news->next = NULL;
if(!head)
{
head = news;
}
else {
while(p->next!=NULL)
{
p = p->next;
}
p->next = news; 

}
return head;
}
