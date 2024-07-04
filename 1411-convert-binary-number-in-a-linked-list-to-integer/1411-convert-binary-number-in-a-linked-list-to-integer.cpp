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
    int getDecimalValue(ListNode* head) {
        vector<int>ans;

        while (head!=NULL)
        {
            ans.push_back(head->val);
            head=head->next;
        }

        int finalans=0;
        reverse(ans.begin(),ans.end());
        for (int i=0; i < ans.size();i++)
        {
            finalans+=ans[i]*(1<<i);
        }
        return finalans;
    }
};