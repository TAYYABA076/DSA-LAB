//#include <iostream>
//using namespace std;
//
//struct TreeNode {
//    int data;
//    TreeNode* left;
//    TreeNode* right;
//    TreeNode(int val) : data(val), left(nullptr), right(nullptr) {}
//};
//
//TreeNode* insert(TreeNode* root, int val) {
//    if (!root) return new TreeNode(val);
//    if (val < root->data)
//        root->left = insert(root->left, val);
//    else
//        root->right = insert(root->right, val);
//    return root;
//}
//
//void dfsPreorder(TreeNode* root) {
//    if (!root) return;
//    cout << root->data << " ";
//    dfsPreorder(root->left);
//    dfsPreorder(root->right);
//}
//
//int main() {
//    TreeNode* root = nullptr;
//    int values[] = {30, 20, 40, 10, 25, 35, 50};
//
//    for (int val : values)
//        root = insert(root, val);
//
//    cout << "DFS (Preorder) Traversal of Tree: ";
//    dfsPreorder(root);
//    cout << endl;
//
//    return 0;
//}





//#include <iostream>
//#include <vector>
//using namespace std;
//
//void dfsGraph(int node, vector<vector<int>>& adj, vector<bool>& visited) {
//    visited[node] = true;
//    cout << node << " ";
//    for (int neighbor : adj[node]) {
//        if (!visited[neighbor])
//            dfsGraph(neighbor, adj, visited);
//    }
//}
//
//int main() {
//    int V = 6;
//    vector<vector<int>> adj(V);
//    adj[0] = {1, 2};
//    adj[1] = {0, 3, 4};
//    adj[2] = {0};
//    adj[3] = {1};
//    adj[4] = {1, 5};
//    adj[5] = {4};
//
//    vector<bool> visited(V, false);
//    cout << "DFS Traversal of Graph starting from node 0: ";
//    dfsGraph(0, adj, visited);
//    cout << endl;
//
//    return 0;
//}




//#include <iostream>
//#include <queue>
//using namespace std;
//
//struct TreeNode {
//    int data;
//    TreeNode* left;
//    TreeNode* right;
//    TreeNode(int val) : data(val), left(nullptr), right(nullptr) {}
//};
//
//TreeNode* insert(TreeNode* root, int val) {
//    if (!root) return new TreeNode(val);
//    if (val < root->data)
//        root->left = insert(root->left, val);
//    else
//        root->right = insert(root->right, val);
//    return root;
//}
//
//void bfsTree(TreeNode* root) {
//    if (!root) return;
//    queue<TreeNode*> q;
//    q.push(root);
//
//    while (!q.empty()) {
//        TreeNode* curr = q.front(); q.pop();
//        cout << curr->data << " ";
//        if (curr->left) q.push(curr->left);
//        if (curr->right) q.push(curr->right);
//    }
//}
//
//int main() {
//    TreeNode* root = nullptr;
//    int values[] = {30, 20, 40, 10, 25, 35, 50};
//
//    for (int val : values)
//        root = insert(root, val);
//
//    cout << "BFS Traversal of Tree: ";
//    bfsTree(root);
//    cout << endl;
//
//    return 0;
//}




#include <iostream>
#include <vector>
#include <queue>
using namespace std;

void bfsGraph(int start, vector<vector<int>>& adj, vector<bool>& visited) {
    queue<int> q;
    q.push(start);
    visited[start] = true;

    while (!q.empty()) {
        int node = q.front(); q.pop();
        cout << node << " ";
        for (int neighbor : adj[node]) {
            if (!visited[neighbor]) {
                visited[neighbor] = true;
                q.push(neighbor);
            }
        }
    }
}

int main() {
    int V = 6;
    vector<vector<int>> adj(V);
    adj[0] = {1, 2};
    adj[1] = {0, 3, 4};
    adj[2] = {0};
    adj[3] = {1};
    adj[4] = {1, 5};
    adj[5] = {4};

    vector<bool> visited(V, false);
    cout << "BFS Traversal of Graph starting from node 0: ";
    bfsGraph(0, adj, visited);
    cout << endl;

    return 0;
}