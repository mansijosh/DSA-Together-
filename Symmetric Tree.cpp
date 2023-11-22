//Given a Binary Tree. Check whether it is Symmetric or not, i.e. whether the binary tree is a Mirror image of itself or not.


class Solution{
    public:
    // return true/false denoting whether the tree is Symmetric or not
    bool check(Node* left, Node* right){
        if(left == NULL && right == NULL)
            return true;
        if(left == NULL || right == NULL || left->data != right->data)
            return false;
            
        return check(left->left,right->right) && check(left->right,right->left);
    }
    bool isSymmetric(struct Node* root)
    {
	    if(root == NULL)
	        return true;
	       return check(root->left,root->right);
    }
};
