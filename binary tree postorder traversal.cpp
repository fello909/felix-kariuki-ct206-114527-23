#include <iostream>

class Node {
public:
    int data;
    Node* left;
    Node* right;

    Node(int value) {
        data = value;
        left = nullptr;
        right = nullptr;
    }
};

void postOrderTraversal(Node* node) {
    if (node == nullptr) {
        return;
    }
    

    postOrderTraversal(node->left);
    
   
    postOrderTraversal(node->right);
    
    
    std::cout << node->data << ", ";
}

int main() {
   
    Node* root = new Node(1);
    root->left = new Node(2);
    root->right = new Node(3);
    root->left->left = new Node(4);
    root->left->right = new Node(5);

    std::cout << "Postorder traversal of binary tree is: ";
    postOrderTraversal(root); ,

  
    return 0;
}