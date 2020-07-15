//approach 1-using unordered map
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
    bool hasCycle(ListNode *head) {
        if(head==NULL || head->next==NULL)
            return false;
        unordered_map<ListNode*,int> m;
        ListNode* temp=head;
        while(temp!=NULL)
        {
            if(m.count(temp)==0)
            {
                m[temp]++;
            }
            else
            {
                return true;
            }
            temp=temp->next;
        }
        return false;
    }
};
//2nd approach =using floyd cycle detection algo
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
    bool hasCycle(ListNode *head) {
        if(head==NULL || head->next==NULL)
            return false;
      ListNode *slowptr=head,*fastptr=head->next->next;
      
        while(slowptr!=NULL && fastptr!=NULL && fastptr->next!=NULL )
        {
    
            if(slowptr==fastptr)
                return true;
                    slowptr=slowptr->next;
            fastptr=fastptr->next->next;
        }
        return false;
    }
};
