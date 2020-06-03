/*
Height of a Binary Tree in C++
*/


int max(int x, int y)
{
    
    return (x>y?x:y);
}
int height(Node* root) {
      if (root == NULL) return -1;

    return max(
        height(root -> left)  + 1,
        height(root -> right) + 1
    );
}
   
