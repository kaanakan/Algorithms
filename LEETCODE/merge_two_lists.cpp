class Solution {
public:
    ListNode* mergeTwoLists(ListNode* l1, ListNode* l2) {
        ListNode *p;
        ListNode *head = new ListNode(0);
        p = head;

        while(l1 and l2){

            if(l1->val < l2->val){
               p->next =  new ListNode(l1->val);
               p = p->next;
               l1 = l1->next;
            }
            else {
               p->next =  new ListNode(l2->val);
               p = p->next;
               l2 = l2->next;
            }

        }
        while(l1){
            p->next =  new ListNode(l1->val);
            p = p->next;
            l1 = l1->next;
        }
        while(l2){
            p->next =  new ListNode(l2->val);
            p = p->next;
            l2 = l2->next;
        }
        p = head -> next;
        delete head;
        return p;
    }
    
};