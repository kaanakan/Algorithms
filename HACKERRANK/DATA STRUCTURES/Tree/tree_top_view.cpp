/*
struct node
{
    int data;
    node* left;
    node* right;
};

*/
void goLeft(node* root){
    if(root == NULL) return;
    goLeft(root -> left);
    cout << root -> data << " ";
}

void goRight(node* root){
    if(root == NULL) return;
    cout << root -> data << " ";
    goRight(root -> right);
}

void topView(node * root) {
    
    goLeft(root -> left);
    cout << root -> data << " ";
    goRight(root -> right);
  
}
