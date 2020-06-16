DoublyLinkedListNode* reverse(DoublyLinkedListNode* head)
{
  DoublyLinkedListNode *temp = head;
  DoublyLinkedListNode *cr = head;
  while(cr!=NULL)
  {
  temp = cr->prev;
  cr->prev = cr->next;
  cr->next = temp;
  cr = cr->prev;
  }
  if(temp!=NULL)
  {
  head = temp->prev;
  }
  return head;
}

