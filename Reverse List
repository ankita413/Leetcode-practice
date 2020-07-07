The question is to reverse linked list
//Iterative approach
class Solution {
public:
    ListNode* reverseList(ListNode* head) {
        ListNode *curr=head;                                //this is iterative approach solved using 3 pointers.
        ListNode *next=NULL;                                       //the first pointer will pint to the current node and next is for pointing to the next node of curr intitially assigned
        ListNode*prev=NULL;                                                   //to null and prev is used for pointing to the prev node of current
        while(curr!=NULL)                                                       //  in the loop we'll move next node by one position everytime so that it contains address to the rest f the lis
        {                                                                           //and we can point our curr node to opposite direction by assigning prev to its next;
            next=curr->next;
            curr->next=prev;
            prev=curr;
            curr=next;
        }
        head=prev;
        return head;
    }
};

