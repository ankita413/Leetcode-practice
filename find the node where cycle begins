/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode *find_Intersecting_Node(ListNode *head){
            ListNode *slow=head,*fast=head;
        while(slow!=NULL && fast!=NULL &&  fast->next!=NULL)
        {
                slow=slow->next;
            fast=fast->next->next;
            if(slow==fast)
                return slow;
        
        }
        return NULL;
    }
    ListNode *detectCycle(ListNode *head) {
        if(head==NULL || head->next==NULL)
            return NULL;
        ListNode *common_node=find_Intersecting_Node(head);
        ListNode *temp=head;
        if(common_node!=NULL)
        {
            while(common_node!=temp)
            {
                common_node=common_node->next;
                temp=temp->next;
            }
            return common_node;
        }
        return NULL;
      
    }
};
