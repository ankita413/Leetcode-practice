/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* swapPairs(ListNode* head) {
     if(head==NULL || head->next==NULL)
    return head;
ListNode *s1=head;
ListNode *s2=head->next;
ListNode *tmp;
head=s1->next;
while(s1 && s2)
{
    s2=s1->next;
    tmp=s2->next;
 s2->next=s1;

if(tmp==NULL || tmp->next==NULL)
{
    s1->next=tmp;
    break;
}
s1->next=tmp->next;
s1=tmp;

}
return head;
    }
};
