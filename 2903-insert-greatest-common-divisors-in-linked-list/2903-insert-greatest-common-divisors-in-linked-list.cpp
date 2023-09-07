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
        ListNode* temp1=head;
        ListNode* temp2=head->next;
        while(temp2!=NULL)
        {
            int x1=temp1->val;
            int x2=temp2->val;
            int v=__gcd(x1,x2);
            ListNode* join=new ListNode(v);
            temp1->next=join;
            join->next=temp2;
            temp1=temp2;
            temp2=temp2->next;
        }
        return head;
    }
};