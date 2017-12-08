class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {

        int carry = 0, xx;
        ListNode* temp;
        xx = l1 -> val + l2 -> val + carry;
            if(xx > 9){
                carry = 1;
                xx -= 10;
            }
            ListNode* q = new ListNode(xx);
            temp = q;
            l1 = l1 -> next;
            l2 = l2 -> next;
        if(!l1 and !l2 and carry){
            ListNode* p = new ListNode(1);
            temp -> next = p;
        }
        while(l1 and l2){

            xx = l1 -> val + l2 -> val + carry;
            carry = 0;
            if(xx > 9){
                carry = 1;
                xx -= 10;
            }
            ListNode* p = new ListNode(xx);
            temp -> next = p;
            temp = p;
            l1 = l1 -> next;
            l2 = l2 -> next;
        }
        while(l1){

            xx = l1 -> val + carry;
            carry = 0;
            if(xx > 9){
                carry = 1;
                xx -= 10;
            }
            ListNode* p = new ListNode(xx);
            temp -> next = p;
            temp = p;
            l1 = l1 -> next;
        }
        while(l2){

            xx = l2 -> val + carry;
            carry = 0;
            if(xx > 9){
                carry = 1;
                xx -= 10;
            }
            ListNode* p = new ListNode(xx);
            temp -> next = p;
            temp = p;
            l2 = l2 -> next;
        }
        if(carry){
            ListNode* p = new ListNode(1);
            temp -> next = p;
        }
        return q;
    }
};
