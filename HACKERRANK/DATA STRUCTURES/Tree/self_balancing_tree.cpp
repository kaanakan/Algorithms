/* Node is defined as :
typedef struct node
{
    int val;
    struct node* left;
    struct node* right;
    int ht;
} node; */

int height(node* t){
    return t==NULL ? -1 : t->ht; 
}

void rotateWithLeftChild(node * & k2)
{
  node *k1 = k2->left;
  k2->left = k1->right;
  k1->right = k2;
  k2->ht = max(height(k2->left), height(k2->right)) + 1;
  k1->ht = max(height(k1->left), height(k2)) + 1;
  k2 = k1;
}



void rotateWithRightChild(node * & k1)
{
  node *k2 = k1->right;
  k1->right = k2->left;
  k2->left = k1;
  k1->ht = max(height(k1->left), height(k1->right)) + 1;
  k2->ht = max(height(k2->right), height(k1)) + 1;
  k1 = k2;
}

void doubleWithLeftChild(node * & k3)
{
  rotateWithRightChild(k3->left);
  rotateWithLeftChild(k3);
}

void doubleWithRightChild(node * & k1)
{
  rotateWithLeftChild(k1->right);
  rotateWithRightChild(k1);
}

void insert_helper(node * & t,int val)
{
   if(t == NULL){
     t = new node();
     t -> val = val;
     t -> left = NULL;
     t -> right = NULL;
     t -> ht = 0;
   }
   else if(val < t->val)    {
     insert_helper( t->left, val);
     if(height(t->left) - height(t->right) == 2)
       if(val < t->left->val)
           rotateWithLeftChild(t);  // case 1
       else
           doubleWithLeftChild(t);  // case 2
   }
   else if(t->val < val)    {
       insert_helper(t->right, val);
       if(height(t->right) - height(t->left) == 2)
          if(t->right->val < val)
             rotateWithRightChild(t);  // case 4
          else
             doubleWithRightChild(t);  // case 3
    }
    else ;  // Duplicate; do nothing
    t->ht = max(height(t->left), height(t->right)) + 1;
  
}

node* insert(node* root, int val){
    insert_helper(root,val);
    return root;
}
