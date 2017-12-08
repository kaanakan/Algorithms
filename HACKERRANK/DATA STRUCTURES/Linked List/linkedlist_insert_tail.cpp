/*
  Insert Node at the end of a linked list 
  head pointer input could be NULL as well for empty list
  Node is defined as 
  struct Node
  {
     int data;
     struct Node *next;
  }
*/
Node* Insert(Node *head,int data)
{
    Node *new_node=new Node();
    new_node->data = data;
    new_node->next = NULL;

    if(head == NULL)
      {
      return new_node;
    }
    else
      {
      Node *p;
      p = head;
      while(p->next != NULL)
          p = p->next;
      p->next = new_node;
      return head;
    }
}
