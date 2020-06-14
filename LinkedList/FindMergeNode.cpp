int findMergeNode(SinglyLinkedListNode* head1, SinglyLinkedListNode* head2) {
SinglyLinkedListNode *la = head1;
SinglyLinkedListNode *sm = head2;
int l1=0,l2=0;
while(head1!=NULL)
{
    l1++;
    head1 = head1->next;
}
head1 = la;
while(head2!=NULL)
{
    l2++;
    head2 = head2->next;
}
head2 = sm;
if(l1>l2)
{
    la = head1;
    sm = head2;
}
else 
{
    la = head2;
    sm = head1;
}
int f =0;
l1 = abs(l1-l2);
    for (int i = 0; i < l1; i++)
    { 
        la = la->next; 
    }
 while (la != NULL && sm != NULL) 
    { 
        if(la == sm) 
        {
          f=la->data;
          break; 
        }
        la = la->next; 
        sm = sm->next; 
    } 
return f;
}
