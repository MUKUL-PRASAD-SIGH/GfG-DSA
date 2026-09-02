/* Node Structure
class Node {
  public:
    int data;
    Node* left, *right;
    Node(int val) {
        data = val;
        left = right = nullptr;
    }
}; */

class Solution {
  public:
    vector<int> boundaryTraversal(Node *root) {

        vector<int> result;

        if (!root)
            return result;

        // Root
        if (!isLeaf(root)) {
            result.push_back(root->data);
        }

        // Left boundary
        addLeftBoundary(root, result);

        // Leaf nodes
        addLeaves(root, result);

        // Right boundary
        addRightBoundary(root, result);

        return result;
    }

  private:

    bool isLeaf(Node* node) {
        return node->left == NULL && node->right == NULL;
    }

    void addLeftBoundary(Node* root, vector<int>& result) {

        Node* curr = root->left;

        while (curr) {

            // Don't add leaf because leaves are added separately
            if (!isLeaf(curr)) {
                result.push_back(curr->data);
            }

            // Prefer left
            if (curr->left)
                curr = curr->left;
            else
                curr = curr->right;
        }
    }

    void addLeaves(Node* node, vector<int>& result) {

        if (!node)
            return;

        // If leaf, add it
        if (isLeaf(node)) {
            result.push_back(node->data);
            return;
        }

        // Traverse left subtree
        addLeaves(node->left, result);

        // Traverse right subtree
        addLeaves(node->right, result);
    }

    void addRightBoundary(Node* root, vector<int>& result) {

        Node* curr = root->right;
        vector<int> temp;

        while (curr) {

            // Don't add leaf
            if (!isLeaf(curr)) {
                temp.push_back(curr->data);
            }

            // Prefer right
            if (curr->right)
                curr = curr->right;
            else
                curr = curr->left;
        }

        // Bottom -> top
        reverse(temp.begin(), temp.end());

        for (int val : temp) {
            result.push_back(val);
        }
    }
};