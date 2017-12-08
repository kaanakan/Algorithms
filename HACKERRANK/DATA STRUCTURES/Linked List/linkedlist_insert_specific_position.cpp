/*
  Insert Node at a given position in a linked list 
  head can be NULL 
  First element in the linked list is at position 0
  Node is defined as 
  struct Node
  {
     int data;
     struct Node *next;
  }
*/
Node* InsertNth(Node *head, int data, int position)
{
    Node* new_node = new Node();
    new_node -> data = data;
    new_node -> next = NULL;
    if (head == NULL) return new_node;
    if (position == 0){
        new_node -> next = head;
        return new_node ;
    }
    Node * prev = head;
    for(int i = 0; i < position - 1; ++i)
        prev = prev -> next;
    new_node -> next = prev -> next;
    prev -> next = new_node;
    return head;
}
