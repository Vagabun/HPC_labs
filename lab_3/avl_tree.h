#ifndef LAB_3_AVL_TREE_H
#define LAB_3_AVL_TREE_H

//ifndef?

typedef int (*compare_f)(void* a, void* b);
typedef void (*print_f)(void* data);
typedef void (*delete_f)(void* data);

typedef struct node {
    void* data;
    int height;
    struct node *left;
    struct node *right;
} NODE;

typedef struct {
    NODE* root;
    compare_f cmp;
    print_f prnt;
    delete_f del;
} avl_tree;

//initialization
void init_tree(avl_tree* tree, compare_f cmp, print_f prnt, delete_f del);
//creating new node
void new_node(NODE** tmp, void* data);
//insert data into tree
void insert_helper(NODE** node, void* key, compare_f cmp);
//wrapping function for insert
void insert(avl_tree* tree, void* key);
//service functions for tree rotations
int max(int a, int b);
int height(NODE* tmp);
int balance_factor(NODE** node);
//rotate functions
void rotate_right(NODE** node);
void rotate_left(NODE** node);
//delete data from tree
void delete_helper(NODE** node, NODE** parent, void* key, compare_f cmp, delete_f del);
//wrapping function for delete
void delete(avl_tree* tree, void* key);
//service function for delete
NODE* get_right_min(NODE* node);
//traversal functions and search in tree
NODE* search(NODE* node, void* key);
void traversal_helper(NODE* node, print_f prnt);
void traversal(avl_tree* tree);

#endif //LAB_3_AVL_TREE_H
