  /*
We will use the Hare and Tortoise Algo
  */

bool has_cycle(SinglyLinkedListNode* head) {
SinglyLinkedListNode *tor = head;
SinglyLinkedListNode *har = head;
if(head == NULL || head->next==NULL)
{
    return false;
}
while( har!=NULL&&har->next!=NULL)
{
    tor = tor->next;   // Tortoise Node
    har = har->next->next; // Hare Node
    if(tor==har)
    {
        return true;
        break;
    }

}
return false;
}
