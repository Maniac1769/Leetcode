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
    ListNode* reverseList(ListNode* head) {
        ListNode* r=NULL;
        ListNode* q=NULL;
        ListNode* first=head;
        while(head!=NULL)
        {
            r=q;
            q=head;
            head=head->next;
            q->next=r;
        }
        first=q;
        return first;
    }
};