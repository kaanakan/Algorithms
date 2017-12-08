/*
   Find merge point of two linked lists
   Node is defined as
   struct Node
   {
       int data;
       Node* next;
   }
*/
int FindMergeNode(Node *headA, Node *headB)
{
    // Complete this function
    // Do not write the main method.
    Node* p, *q;
    p = headA;
    q = headB;
    while(p != q){
        if(p == NULL)
            p = headB;
        else
            p = p -> next;
        if(q == NULL)
            q = headA;
        else
            q = q -> next;
    }
    return p -> data;
}
