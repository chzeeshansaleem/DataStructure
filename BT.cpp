#include <iostream>

using namespace std;

struct Node {
    struct Node* left;
    struct Node* right;
    int data;

    Node(int val) {
        data = val;
        left = NULL;
        right = NULL;
    }
};

int Search(int inorder[], int start, int end, int curr) {
    for (int i = start; i <= end; i++) {
        if (inorder[i] == curr) {
            return i;
        }
    }
    return -1;
}

Node* buildTree(int preorder[], int inorder[], int start, int end) {
    static int idx = 0;
    if (start > end) {
        return NULL;
    }
    int curr = preorder[idx];
    idx++;
    Node* node = new Node(curr);
    if (start == end) {
        return node;
    }
    int pos = Search(inorder, start, end, curr);
    node->left = buildTree(preorder, inorder, start, pos - 1);
    node->right = buildTree(preorder, inorder, pos + 1, end);
    return node;
}

void preorder(struct Node* root) {
    if (root == NULL) {
        return;
    }
    cout << root->data << " ";
    preorder(root->left);
    preorder(root->right);
}

void inOrder(struct Node* root) {
    if (root == NULL) {
        return;
    }
    inOrder(root->left);
    cout << root->data << " ";
    inOrder(root->right);
}

void postOrder(struct Node* root) {
    if (root == NULL) {
        return;
    }
    postOrder(root->left);
    postOrder(root->right);
    cout << root->data << " ";
}

int main() {
    int preorder[] = {1, 2, 3, 4, 5};
    int inorder[] = {4, 2, 1, 5, 3};

    // build tree
    Node* root = buildTree(preorder, inorder, 0, 4);

    cout << "Inorder traversal: ";
    inOrder(root);
    cout << endl;

    cout << "Preorder traversal: ";
    preorder(root);
    cout << endl;

    cout << "Postorder traversal: ";
    postOrder(root);
    cout << endl;

    return 0;
}
