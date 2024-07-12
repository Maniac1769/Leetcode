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
    ListNode* deleteMiddle(ListNode* head) 
    {
        if(head==NULL || head->next==NULL)
            return NULL;
        ListNode *slow=head;
        ListNode *fast=head->next;
        ListNode *back=NULL;            
        while(fast!=NULL)
        {
            fast=fast->next;
            if(fast!=NULL)
                fast=fast->next;
            back=slow;
            slow=slow->next;
            if(slow==fast)
                break;
        }    
        back->next=slow->next;          // break the link with the middle node
        delete(slow);                   // delete the memory space
        return head;
    }
};