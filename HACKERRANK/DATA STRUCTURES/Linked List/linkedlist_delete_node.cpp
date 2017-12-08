/*
  Delete Node at a given position in a linked list 
  Node is defined as 
  struct Node
  {
     int data;
     struct Node *next;
  }
*/
Node* Delete(Node *head, int position)
{
    if (position == 0)
    {
        Node *tmp = head;
        head = head -> next;
        delete tmp;
        return head;
    }
        Node *prev = head, *tmp;
        for(int i = 0; i < position - 1; ++i)
            prev = prev -> next;
        tmp = prev -> next;
        prev -> next = prev -> next -> next;
        delete tmp;
    return head;

}
