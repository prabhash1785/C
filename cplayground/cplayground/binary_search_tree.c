//
//  binary_search_tree.c
//  cplayground
//
//  Created by Rathore, Prabhash on 7/9/16.
//  Copyright (c) 2016 Rathore, Prabhash. All rights reserved.
//

#include <stdio.h>
#include <stdlib.h>

struct node {
    int data;
    struct node *left;
    struct node *right;
};

struct node *addNode(struct node *, int);
void print_tree_inorder(struct node *);

int main(int argc, char **argv) {
    struct node *root = addNode(NULL, 10);
    root = addNode(root, 12);
    root = addNode(root, 100);
    root = addNode(root, 8);
    root = addNode(root, 6);
    root = addNode(root, 17);
    root = addNode(root, 5);
    root = addNode(root, 11);
    
    printf("Inorder traversal of tree:\n");
    print_tree_inorder(root);
    printf("\n");
}

struct node *addNode(struct node *root, int data) {
    if(root == NULL) {
        struct node *temp = malloc(sizeof(struct node));
        temp->data = data;
        return temp;
    }
    
    struct node *newNode = malloc(sizeof(struct node));
    newNode->data = data;
    
    struct node *current = root;
    struct node *parent = root;
    
    while(1) {
        parent = current;
        if(data <= current->data) {
            current = current->left;
            if(current == NULL) {
                parent->left = newNode;
                return root;
            }
        } else {
            current = current->right;
            if(current == NULL) {
                parent->right = newNode;
                return root;
            }
        }
    }
}

void print_tree_inorder(struct node *root) {
    if(root != NULL) {
        print_tree_inorder(root->left);
        printf("%d ", root->data);
        print_tree_inorder(root->right);
    }
}

