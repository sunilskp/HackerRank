/*
Preorder Traversal in C++
*/
    
    void preOrder(Node *root)
    {
        if(root)
        {
        cout<<root->data<<" ";
        preOrder(root->left);
        preOrder(root->right);
        }
    }
