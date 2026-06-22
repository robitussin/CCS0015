class IntBinaryTree {
private:
    struct TreeNode {
        int value;
        TreeNode *left;
        TreeNode *right;
    };  

    TreeNode *root;
    void destroySubTree(TreeNode *);
    void deleteNode(int, TreeNode *&);
    void makeDeletion(TreeNode *&);
    void displayInOrder(TreeNode *);
    void displayPreOrder(TreeNode *);
    void displayPostOrder(TreeNode *);

public:
    IntBinaryTree(){
        root = NULL; 
    }

    void insertNode(int num);
    bool searchNode(int num);
    bool remove(int num);
    void showNodesInOrder(){
        displayInOrder(root);
    }
    void showNodesPreOrder(){
        displayPreOrder(root);
    }
    void showNodesPostOrder(){
        displayPostOrder(root);
    }
};