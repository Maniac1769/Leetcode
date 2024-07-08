class Solution {
public:
    ListNode* reverse(ListNode* head){
        ListNode* r=NULL,*q=NULL,*first=head;
        while(head){
            r=q;
            q=head;
            head=head->next;
            q->next=r;
        }
        first=q;
        return first;
    }
    
    ListNode* findMiddleNode(ListNode* head){
        ListNode* slowptr=head,*fastptr=head->next;
        while(fastptr&&fastptr->next){
            slowptr=slowptr->next;
            fastptr=fastptr->next->next;
        }
        return slowptr;
    }
    
    int pairSum(ListNode* head) {
        int ans=0;
        
        ListNode* midNode=findMiddleNode(head);
        ListNode* head2=reverse(midNode);
        
        midNode->next=NULL;
        
        
        ListNode* p1=head,*p2=head2;
        while(p1&&p2){
            ans=max(ans,p1->val+p2->val);
            p1=p1->next;
            p2=p2->next;
        }
        
        midNode->next=reverse(head2);
        
        return ans;
    }
};