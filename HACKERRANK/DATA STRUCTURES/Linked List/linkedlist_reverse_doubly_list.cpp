/*
   Reverse a doubly linked list, input list may also be empty
   Node is defined as
   struct Node
   {
     int data;
     Node *next;
     Node *prev;
   }
*/
Node* Reverse(Node* head)
{
    // Complete this function
    // Do not write the main method.
    if(head == NULL) return NULL;
    Node* curr = head;
    Node* prev = NULL;
    Node* next;
    while(curr){
        next = curr -> next;
        curr -> next = prev;
        curr -> prev = next;
        prev = curr;
        curr = next;
    }
    return prev;
    
}
