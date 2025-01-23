class Solution {
public:
    ListNode* reverseBetween(ListNode* head, int left, int right) {
        if (head == nullptr || left == right) return head;

        ListNode dummy(0);
        dummy.next = head;
        ListNode* pre = &dummy;

        // Move pre to the node before the left position
        for (int i = 0; i < left - 1; ++i) {
            pre = pre->next;
        }

        ListNode* current = pre->next;
        ListNode* next_node = nullptr;

        // Reverse the sublist from left to right
        for (int i = 0; i < right - left; ++i) {
            next_node = current->next;
            current->next = next_node->next;
            next_node->next = pre->next;
            pre->next = next_node;
        }

        return dummy.next;
    }
};