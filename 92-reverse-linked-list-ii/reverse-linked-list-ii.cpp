class Solution {
public:
    ListNode* reverseBetween(ListNode* head, int left, int right) {
        if (head == nullptr || left == right) return head;

        ListNode *q = nullptr; // Node before the left position
        ListNode *l = head;    // Node at left position
        // Move l to left position and q to its predecessor
        for (int i = 0; i < left - 1; ++i) {
            q = l;
            l = l->next;
        }

        ListNode *r = head;    // Node at right position
        // Move r to right position
        for (int i = 0; i < right - 1; ++i) {
            r = r->next;
        }
        ListNode *s = r->next; // Node after right position

        // Reverse the sublist from l to r
        ListNode *prev = nullptr;
        ListNode *current = l;
        ListNode *next_node = nullptr;
        while (current != s) {
            next_node = current->next;
            current->next = prev;
            prev = current;
            current = next_node;
        }

        // Connect the predecessor q to the new head of reversed sublist (prev)
        if (q != nullptr) {
            q->next = prev;
        } else {
            // If q is null, left was 1, update head to prev
            head = prev;
        }

        // Connect the original l (now end of reversed sublist) to s
        l->next = s;

        return head;
    }
};