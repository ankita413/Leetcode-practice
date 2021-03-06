/*Rotate List question
Given a linked list, rotate the list to the right by k places, where k is non-negative.
https://leetcode.com/problems/rotate-list/*/
class Solution {
public:
    ListNode* rotateRight(ListNode* head, int k) {
        int count=0;                                      
        ListNode* temp=head;;
            if(head==NULL || head->next==NULL)      //in case head has only one or zero nodes
          return head;
        while(temp!=NULL)
        {
           count++;
            temp=temp->next;                          //count number if nodes
             
        }
        if(k>count)
        {
            k=k%count;                                      // in case k is greater than the number of nodes in list
        }
            ListNode*tail;
  
       for(int i=0;i<k;i++)
       {
           tail=head;
           ListNode* prev;                                      // now k times rotate the list to righ
           while(tail->next!=NULL && tail!=NULL)
           {
                       prev=tail;
               tail=tail->next;
       
           }
           ListNode* temp=tail;
           prev->next=NULL;
           temp->next=head;
           head=temp;
          
           
       }
        return head;                                      // the code prvides correct output but has poor time complexity for larger test cases.
    }
};
