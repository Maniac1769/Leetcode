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
    ListNode* reverseLinkedList(ListNode *head)
{
   ListNode* first=head; 
   ListNode* r=NULL; 
   ListNode* q=NULL;
   while(head)
   {
       r=q;
       q=head;
       head=head->next;
       q->next=r;
   }
   first=q;
   return q;
}

// Function to get the Kth node from
// a given position in the linked list
ListNode* getKthNode(ListNode* temp, int k) {
    // Loop k-1 times or until temp becomes NULL
    for (int i = 1; i < k && temp != NULL; ++i) {
        // Move to the next node
        temp = temp->next;
    }
    
    // Return the Kth node
    return temp;
}

// Function to reverse nodes in groups of K
ListNode* reverseKGroup(ListNode* head, int k){
    // Initialize a temporary
    // node to traverse the list
    ListNode* temp = head; 

    // Initialize a pointer to track the
    // ;ast node of the previous group
    ListNode* prevLast = NULL; 
    
    // Traverse through the linked list
    while(temp != NULL){
        // Get the Kth node of the current group
        ListNode* kThNode = getKthNode(temp, k); 

        // If the Kth node is NULL
        // (not a complete group)
        if(kThNode == NULL){
            // If there was a previous group,
            // link the last node to the current node
            if(prevLast){
                prevLast -> next = temp; 
            }
            
            // Exit the loop
            break; 
        }
        
        // Store the next node
        // after the Kth node
        ListNode* nextNode = kThNode -> next; 

        // Disconnect the Kth node
        // to prepare for reversal
        kThNode -> next = NULL; 

        // Reverse the nodes from
        // temp to the Kth node
        reverseLinkedList(temp); 
        
        // Adjust the head if the reversal
        // starts from the head
        if(temp == head){
            head = kThNode;
        }else{
            // Link the last node of the previous
            // group to the reversed group
            prevLast -> next = kThNode; 
        }

        // Update the pointer to the
        // last node of the previous group
        prevLast = temp; 

        // Move to the next group
        temp = nextNode; 
    }
    
    // Return the head of the
    // modified linked list
    return head; 
}
};