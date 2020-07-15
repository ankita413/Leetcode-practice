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
    int countNodes(ListNode * node)
    {
        int count = 0;
        while(node!=NULL)
        {
            count++;
        node=node->next;
        }
        return count;
    }
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        if(headA==NULL || headB==NULL)
            return NULL;
        int count_LL1 = countNodes(headA);
        int count_LL2 = countNodes(headB);
        ListNode *tmp;
        if(count_LL1>count_LL2)
        {
           tmp = headA;
            int skip = count_LL1 - count_LL2;
            while(skip >=1 && tmp!=NULL)
            {
                tmp = tmp->next;
                    skip--;
            }
            ListNode*tmp2=headB;
            while(tmp!=NULL)
            {
                    
                if(tmp2==tmp)
                        return tmp;
                tmp=tmp->next;
                tmp2=tmp2->next;
            }
        }
        else if(count_LL2 >count_LL1)
        {
            int skip = count_LL2-count_LL1;
          tmp = headB;
            while(skip>=1)
            {
                tmp = tmp->next;
                skip--;
            }
            ListNode *tmp2=headA;
            while(tmp!=NULL)
            {
                if(tmp2==tmp)
                        return tmp;
                tmp=tmp->next;
                tmp2=tmp2->next;
            }
        }
        else
        {
            tmp=headA;
            ListNode*tmp2 = headB;
            while(tmp!=NULL)
            {
                if(tmp == tmp2)
                    return tmp;
                
                tmp = tmp -> next;
                tmp2 = tmp2 -> next;
            }
        }
       return NULL;
    }
};
