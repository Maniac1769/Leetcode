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
    ListNode* insertGreatestCommonDivisors(ListNode* head) {
        if(head==NULL || head->next==NULL) return head;
        ListNode* slow= head;
        ListNode* fast=head->next;
        while(fast!=NULL){
           int x = gcd(fast->val,slow->val);
            ListNode* node =new ListNode(x);
            slow->next=node;
            node->next=fast;
            slow=fast;
            fast=fast->next;
        }
        return head;
    }
};