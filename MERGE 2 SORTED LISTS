Node* sortedMerge(Node* head1, Node* head2)  
{  
Node* newlist=new Node(0);
Node *temp=newlist;
Node *h1=head1;
Node *h2=head2;
  while(h1 && h2)
  {
      if(h1->data<h2->data)
      {
         temp->next=h1;
         h1=h1->next;
         temp=temp->next;
         temp->next=NULL;
      }
      else if(h2->data<h1->data)
      {
          temp->next=h2;
          h2=h2->next;
          temp=temp->next;
                   temp->next=NULL;
      }
      else
      {
          temp->next=h1;
          h1=h1->next;
          temp=temp->next;
                   temp->next=NULL;
          temp->next=h2;
          h2=h2->next;
          temp=temp->next;
                   temp->next=NULL;
      }
  }
  if(h1!=NULL && h2==NULL)
  {
      temp->next=h1;
  }
  else if(h1==NULL && h2!=NULL)
  temp->next=h2;
  return  newlist->next;
}  
