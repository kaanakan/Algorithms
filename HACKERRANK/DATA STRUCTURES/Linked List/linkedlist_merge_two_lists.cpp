/*
  Merge two sorted lists A and B as one linked list
  Node is defined as 
  struct Node
  {
     int data;
     struct Node *next;
  }
*/
Node* MergeLists(Node *l1, Node* l2)
{
        Node *p;
        Node *head = new Node();
        head -> data = 0;
        p = head;
        while(l1 and l2){

            if(l1->data < l2->data){
               p->next =  new Node();
               p -> next -> data = l1 -> data;
               p = p->next;
               l1 = l1->next;
            }
            else {
               p->next =  new Node();
               p -> next -> data = l2 -> data;
               p = p->next;
               l2 = l2->next;
            }
        }
        while(l1){
            p->next =  new Node();
            p -> next -> data = l1 -> data;
            p = p->next;
            l1 = l1->next;
        }
        while(l2){
            p->next =  new Node();
            p -> next -> data = l2 -> data;
            p = p->next;
            l2 = l2->next;
        }
        p = head -> next;
        delete head;
        return p;
}
