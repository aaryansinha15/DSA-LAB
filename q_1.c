#include<stdio.h>
#include<stdlib.h>

struct node {
    int info;
    struct node *left;
    struct node *right;
};

struct node* createNode(int x){
    struct node *temp;
    temp = (struct node*)malloc(sizeof(struct node));
    temp->info = x;
    temp->left = NULL;
    temp->right = NULL;
    return temp;
}

struct node* insertNode(struct node* root, int x){
    if (root == NULL){
        return createNode(x);
    }
    else if (x < root->info){
        root->left = insertNode(root->left, x);
    }
    else if (x > root->info){
        root->right = insertNode(root->right, x);
    }
    return root;
}

int countNodeRange(struct node* root, int lo, int hi){
    if (root == NULL){
        return 0;
    }
    if (root->info >= lo && root->info <= hi){
        return 1 + countNodeRange(root->left, lo, hi) + countNodeRange(root->right, lo, hi);
    }
    else if (root->info < lo){
        return countNodeRange(root->right, lo, hi);
    }
    else {
        return countNodeRange(root->left, lo, hi);
    }
}

int main(){
    struct node *root = createNode(10);
    insertNode(root, 5);
    insertNode(root, 50);
    insertNode(root, 1);
    insertNode(root, 40);
    insertNode(root, 100);

    int lo=5, hi=45;
    int ctr = countNodeRange(root, lo, hi);
    printf("%d\n", ctr);
    return 0;
}