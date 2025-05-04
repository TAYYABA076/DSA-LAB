//#include <iostream>
//using namespace std;

//class Node {
//    int data;
//    Node* left;
//    Node* right;
//    Node(int val) : data(val), left(nullptr), right(nullptr) {}
//};
//
//Node* insertBST(Node* root, int val) {
//    if (!root) return new Node(val);
//    if (val < root->data)
//        root->left = insertBST(root->left, val);
//    else
//        root->right = insertBST(root->right, val);
//    return root;
//}
//
//void inorderBST(Node* root) {
//    if (root) {
//        inorderBST(root->left);
//        cout << root->data << " ";
//        inorderBST(root->right);
//    }
//}
//
//int main() {
//    Node* root = nullptr;
//    int values[] = {30, 20, 40, 10, 25, 35, 50};
//
//    for (int val : values)
//        root = insertBST(root, val);
//
//    cout << "Inorder Traversal of BST: ";
//    inorderBST(root);
//    cout << endl;
//
//    return 0;
//}
















#include <iostream>
#include <algorithm>
using namespace std;

struct Node {
    int data;
    Node* left;
    Node* right;
    Node(int val) : data(val), left(nullptr), right(nullptr) {}
};

int height(Node* node) {
    if (!node) return 0;
    return max(height(node->left), height(node->right)) + 1;
}

int getBalance(Node* node) {
    return node ? height(node->left) - height(node->right) : 0;
}

Node* rotateRight(Node* y) {
    Node* x = y->left;
    Node* T2 = x->right;
    x->right = y;
    y->left = T2;
    return x;
}

Node* rotateLeft(Node* x) {
    Node* y = x->right;
    Node* T2 = y->left;
    y->left = x;
    x->right = T2;
    return y;
}

Node* insertAVL(Node* root, int key) {
    if (!root) return new Node(key);
    if (key < root->data)
        root->left = insertAVL(root->left, key);
    else if (key > root->data)
        root->right = insertAVL(root->right, key);
    else
        return root;

    int balance = getBalance(root);

    if (balance > 1 && key < root->left->data)
        return rotateRight(root);
    if (balance < -1 && key > root->right->data)
        return rotateLeft(root);
    if (balance > 1 && key > root->left->data) {
        root->left = rotateLeft(root->left);
        return rotateRight(root);
    }
    if (balance < -1 && key < root->right->data) {
        root->right = rotateRight(root->right);
        return rotateLeft(root);
    }

    return root;
}

void inorderAVL(Node* root) {
    if (root) {
        inorderAVL(root->left);
        cout << root->data << " ";
        inorderAVL(root->right);
    }
}

int main() {
    Node* root = nullptr;
    int values[] = {30, 20, 40, 10, 25, 35, 50};

    for (int val : values)
        root = insertAVL(root, val);

    cout << "Inorder Traversal of AVL Tree: ";
    inorderAVL(root);
    cout << endl;

    return 0;
}