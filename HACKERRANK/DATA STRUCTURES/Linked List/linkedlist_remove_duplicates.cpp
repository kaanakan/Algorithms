/*
  Remove all duplicate elements from a sorted linked list
  Node is defined as 
  struct Node
  {
     int data;
     struct Node *next;
  }
*/
Node* RemoveDuplicates(Node *head)
{
  Node* p = head, *tmp, *curr = head;
  while(p -> next){
      if(p -> next -> data == p -> data){
          tmp = p -> next;
          p -> next = p -> next -> next;
          delete tmp;
      }
      else{
          p = p -> next;
      }
  }
  return curr;
}
