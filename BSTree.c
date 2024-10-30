#include <stdio.h>
#include <stdlib.h>

// Define a structure for the tree node
typedef struct tree {
    double data;
    struct tree* left;
    struct tree* right;
} Tree;

// Function to create a new tree node
Tree* createNode(double data) {
    Tree* newNode = (Tree*)malloc(sizeof(Tree));
    if (!newNode) {
        printf("Memory error\n");
        return NULL;
    }
    newNode->data = data;
    newNode->left = NULL;
    newNode->right = NULL;
    return newNode;
}

// Function to insert a new node into the tree
Tree* insert(Tree* root, double data) {
    if (root == NULL) {
        return createNode(data);
    }

    if (data < root->data) {
        root->left = insert(root->left, data);
    } else if (data > root->data) {
        root->right = insert(root->right, data);
    }

    return root;
}

// Function to find the node with the minimum value in the tree
Tree* minValue(Tree* temp) {
    while (temp != NULL && temp->left != NULL) {
        temp = temp->left;
    }
    return temp;
}

// Function to perform inorder traversal of the tree
void inorder(Tree* temp) {
    if (temp != NULL) {
        inorder(temp->left);
        printf("%0.2f ", temp->data);
        inorder(temp->right);
    }
}

// Function to delete a node from the tree
Tree* deleteNode(Tree* root, double data) {
    if (root == NULL) {
        return root;
    }

    if (root->data > data) {
        root->left = deleteNode(root->left, data);
    } else if (root->data < data) {
        root->right = deleteNode(root->right, data);
    } else {
        // Node has no child
        if (root->left == NULL && root->right == NULL) {
            free(root);
            return NULL;
        }

        // Node has one child
        if (root->left == NULL) {
            Tree* temp = root->right;
            free(root);
            return temp;
        } else if (root->right == NULL) {
            Tree* temp = root->left;
            free(root);
            return temp;
        }

        // Node has two children
        Tree* temp = minValue(root->right);
        root->data = temp->data;
        root->right = deleteNode(root->right, temp->data);
    }

    return root;
}

// Function to free the tree
void freeTree(Tree* root) {
    if (root != NULL) {
        freeTree(root->left);
        freeTree(root->right);
        free(root);
    }
}

int main() {
    Tree* root = NULL;

    root = insert(root, 81);
    root = insert(root, 65);
    root = insert(root, 95);
    root = insert(root, 129);
    root = insert(root, 176);
    root = insert(root, 56);

    printf("\n");
    inorder(root);

    // Free the tree
    freeTree(root);

    return 0;
}