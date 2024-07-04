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
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
      if(list1==NULL && list2==NULL){
        return NULL;
      }
     if(list1==NULL){
        return list2;
     }
     if(list2==NULL){
        return list1;
     }
    ListNode dummy;
    ListNode* tail =&dummy;
    ListNode *currA = list1;
    ListNode *currB = list2;
    while (currA != NULL && currB != NULL) {
        if (currA->val <= currB->val) {
            tail->next = currA;
            currA = currA->next;
        } else {
            tail->next = currB;
            currB = currB->next;
        }
        tail = tail->next;
    }
    if (currA != NULL) {
        tail->next = currA;
    } else {
        tail->next = currB;
    }
    return dummy.next;
    }
};