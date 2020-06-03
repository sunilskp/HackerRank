/*
Inorder Traversal in C++
*/
    
    void inOrder(Node *root) {
            if(root)
            {
                
                inOrder(root->left);
                cout<<root->data<<" ";
                inOrder(root->right);

            }
    }
