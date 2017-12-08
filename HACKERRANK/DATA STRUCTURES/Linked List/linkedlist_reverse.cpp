/*
  Reverse a linked list and return pointer to the head
  The input list will have at least one element  
  Node is defined as 
  struct Node
  {
     int data;
     struct Node *next;
  }
*/
Node* Reverse(Node *head)
{
    Node *new_head = NULL, *nxt;
    while(head){
        nxt = head -> next;
        head -> next = new_head;
        new_head = head;
        head = nxt;
    }
    return new_head;
}
