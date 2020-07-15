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
 // apprach 1:- by creating a new list
class Solution {
public:
    bool isPalindrome(ListNode* head) {
        if(head==NULL || head->next==NULL)
            return true;
        ListNode *newList=new ListNode();
        newList->val=head->val;
        newList->next=NULL;
        ListNode* temp=head->next;
        while(temp!=NULL)
        {
            ListNode *newnode=new ListNode(temp->val);
            newnode->next=newList;
            newList=newnode;
            temp=temp->next;
        }
        temp=head;
        while(temp!=NULL)
        {
            if(temp->val!=newList->val)
            {
                
                return false;
            }
            temp=temp->next;
            newList=newList->next;
        }
        return true;
    }
};
                //2nd approach without using extra space
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
    int countNodes(ListNode* head)
    {
        int count=0;
        while(head!=NULL)
        {
            count++;
            head=head->next;
        }
        return count;
    }
    bool isPalindrome(ListNode* head) {
        if(head==NULL || head->next==NULL)
            return true;
        int count=countNodes(head);
        int mid;
        if(count%2==0)
            mid=count/2;
        else
            mid=(count/2)+1;
        ListNode*curr=head;
        ListNode *prev,*tmpnxt=NULL;
        while(mid--)
        {
           tmpnxt=curr->next;
            prev=curr;
            curr=tmpnxt;
        }
     ListNode *tmpmid=prev;
        ListNode* tmpcurr=curr;
        while(tmpnxt!=NULL)
        {
            tmpnxt=curr->next;
            curr->next=prev;
            prev=curr;
            curr=tmpnxt;
            
        }
        tmpmid->next=prev;
        tmpcurr->next=NULL;
        ListNode *tmp= head;
        tmpmid=tmpmid->next;
        while(tmpmid!=NULL)
        {
            if(tmp->val!=tmpmid->val)
                return false;
            tmpmid=tmpmid->next;
            tmp=tmp->next;
        }
            return true;
            
    }
};
