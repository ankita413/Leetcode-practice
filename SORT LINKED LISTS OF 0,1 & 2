Node* segregate(Node *head) {
Node *zero=new Node(0);
Node *one=new Node(0);
Node *two=new Node(0);
Node *curr=head;
Node *curr_zero=zero,*curr_one=one,*curr_two=two;
while(curr!=NULL)
{
    if(curr->data==0)
    {
        curr_zero->next=curr;
        curr_zero=curr_zero->next;
     
    }
    else if(curr->data==1)
    {
        curr_one->next=curr;
        curr_one=curr_one->next;

    }
    else
    {
        curr_two->next=curr;
        curr_two=curr_two->next;

    }
    curr=curr->next;
}
if(one->next==NULL)
curr_zero->next=two->next;
else
curr_zero->next=one->next;
curr_one->next=two->next;
curr_two->next=NULL;
head=zero->next;

delete one;
delete two;
delete zero;
    return head;
}
