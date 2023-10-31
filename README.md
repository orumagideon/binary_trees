This collective project delved into exploring trees as data structures, encompassing their intricacies, benefits, and drawbacks. It covered various types of trees and their implementations, including binary, binary search, AVL, and Max Binary Heap trees.

The repository structure and its contents:

Tests: Contains a set of test files for all tasks, provided by ALX.
Helper File: binary_tree_print.c - A C function that visually renders binary trees in an aesthetically pleasing manner.
Header File: binary_trees.h - Includes definitions and prototypes for all functions and types developed within the project.
struct binary_tree_s {
    int n;
    struct binary_tree_s *parent;
    struct binary_tree_s *left;
    struct binary_tree_s *right;
};

typedef struct binary_tree_s binary_tree_t;
typedef struct binary_tree_s bst_t;
typedef struct binary_tree_s avl_t;
typedef struct binary_tree_s heap_t;

Key Function Prototypes
Outlined key functions and their purposes within the project:

Creation and manipulation of binary trees, from node insertion to deletion.
Tree traversal methods: pre-order, in-order, and post-order.
Calculations regarding tree properties such as height, depth, size, and balance factor.
Checking tree characteristics like being full, perfect, and being a binary search or AVL tree.
Exploring relationships between nodes like finding siblings, uncles, and the lowest common ancestor.
Tasks
The project segmented its tasks into smaller modules, each focusing on specific functionalities and operations concerning trees. Tasks included creating new nodes, inserting elements, tree traversal, calculating properties, checking validity (BST, AVL), and rotating nodes, among other operations.
