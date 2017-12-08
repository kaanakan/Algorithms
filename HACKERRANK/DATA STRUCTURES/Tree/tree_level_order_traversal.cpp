
/*
struct node
{
    int data;
    node* left;
    node* right;
}*/

void levelOrder(node * root) {
  std::queue<node*> que;
    que.push(root);
    while(!que.empty()){
        node* tmp = que.front();
        que.pop();
        cout << tmp -> data << " ";
        if(tmp -> left)
            que.push(tmp -> left);
        if(tmp -> right)
            que.push(tmp -> right);
    }
  
}
