/*
Detect a cycle in a linked list. Note that the head pointer may be 'NULL' if the list is empty.

A Node is defined as: 
    struct Node {
        int data;
        struct Node* next;
    }
*/

bool has_cycle(Node* head) {
    // Complete this function
    // Do not write the main method
    Node* p = head;
    for(int i = 0; i < 100; ++i){
        if(p == NULL) return false;
        p = p -> next;
    }
    return true;
}
