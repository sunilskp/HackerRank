SinglyLinkedListNode* insertNodeAtPosition(SinglyLinkedListNode* head, int data, int position)
{
  SinglyLinkedListNode *ne = (SinglyLinkedListNode*)malloc(sizeof(SinglyLinkedListNode));
  ne->data = data;
  ne->next = NULL;
  SinglyLinkedListNode *p = head;
  SinglyLinkedListNode *q;
  int l = 0;
  if(position==1)
  {
      ne->next = head;
      p = ne;
  }

  else
  {
    while(head!=NULL && l< position )
    {
      q = head;
      head = head->next;
      l++;
    }
    if(head==NULL)
    {
      return p;
    }
    else
    {
        q->next = ne;
        ne->next = head;
    }
   }
  return p;
}

