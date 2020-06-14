  /*
We will use the Hare and Tortoise Algo
  */

bool has_cycle(SinglyLinkedListNode* head) {
SinglyLinkedListNode *t = head;
SinglyLinkedListNode *r = head;
if(head == NULL || head->next==NULL)
{
    return false;
}
while( r!=NULL&&r->next!=NULL)
{
    t = t->next;   // Tortoise Node
    r = r->next->next; // Hare Node
    if(t==r)
    {
        return true;
        break;
    }

}
return false;
}
