/*
    Insert Node in a doubly sorted linked list 
    After each insertion, the list should be sorted
   Node is defined as
   struct Node
   {
     int data;
     Node *next;
     Node *prev;
   }
*/
Node* SortedInsert(Node *head,int data)
{
    // Complete this function
   // Do not write the main method.
    Node* new_node = new Node();
    new_node -> data = data;
    new_node -> next = NULL;
    new_node -> prev = NULL;
    if(head == NULL){
        return new_node;
    }
    else if(data < head -> data){
        new_node -> next = head;
        head -> prev = new_node;
        return new_node;
    }
    Node* p = head;
    while(p -> next){
        if(p -> next -> data < data)
            p = p -> next;
        else
            break;
    }
    if(p -> next == NULL){
        p -> next = new_node;
        new_node -> prev = p;
        return head;
    }
    new_node -> next = p -> next;
    new_node -> prev = p;
    p -> next -> prev = new_node;
    p -> next = new_node;
    return head;
}
