/*
Postorder Traversal in C++
*/


void postOrder(Node *root) {
                if(root)
                {
                    postOrder(root->left);
                    postOrder(root->right);
                    cout<<root->data<<" ";
                }
    }
