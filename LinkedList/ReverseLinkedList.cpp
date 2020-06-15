SinglyLinkedListNode* reverse(SinglyLinkedListNode* head) 
{
  stack<SinglyLinkedListNode*> li;
  SinglyLinkedListNode *p= head;
  if(head->next==NULL)
  {
      return head;
  }
  else
  {
      while(p->next!=NULL)
      {
          li.push(p);
          p=p->next;
      }
      head = p;
      while(!li.empty())
      {
      p->next = li.top();
      p = p->next;
      li.pop();
      }
      p->next = NULL;


  }
  return head;
}

