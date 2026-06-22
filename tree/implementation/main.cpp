#include <iostream>
#include "intbinarytree.h"
using namespace std;

int main(){

    IntBinaryTree tree;
    cout << "Inserting nodes. . ." << endl;
    tree.insertNode(5);
    tree.insertNode(8);
    tree.insertNode(3);      
    tree.insertNode(12);
    tree.insertNode(9);
    cout << "Done. . ." << endl;

    cout << "In-order traversal. . ." << endl;
    tree.showNodesInOrder();
    cout << "Pre-order traversal. . ." << endl;
    tree.showNodesPreOrder();
    cout << "Post-order traversal. . ." << endl;
    tree.showNodesPostOrder();
    
    if(tree.searchNode(3)){
        cout << "Node found." << endl;
    }
    else{
        cout << "Node not found." << endl;
    }

    tree.remove(8);
    tree.remove(12);

    cout << "Now, here are the nodes" << endl;
    tree.showNodesInOrder();

    return 0;
}