#include "binary_trees.h"

/**
 * binary_tree_height - Measures the height of a binary tree
 * @tree: Pointer to the root node of the tree
 *
 * Return: Height of the tree
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t left_height, right_height;

	if (tree == NULL)
		return 0;

	left_height = binary_tree_height(tree->left);
	right_height = binary_tree_height(tree->right);

	if (left_height > right_height)
		return left_height + 1;
	return right_height + 1;
}

/**
 * binary_tree_size - Measures the size of a binary tree
 * @tree: Pointer to the root node of the tree
 *
 * Return: Size of the tree
 */
size_t binary_tree_size(const binary_tree_t *tree)
{
	if (tree == NULL)
		return 0;

	return binary_tree_size(tree->left) + 1 + binary_tree_size(tree->right);
}

/**
 * binary_tree_is_perfect - Checks if a binary tree is perfect
 * @tree: Pointer to the root node of the tree
 *
 * Return: 1 if the tree is perfect, 0 otherwise
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	size_t height, nodes, perfect_nodes;

	if (tree == NULL)
		return 0;

	height = binary_tree_height(tree);
	nodes = binary_tree_size(tree);
	perfect_nodes = 1;

	while (height > 0)
	{
		perfect_nodes *= 2;
		height--;
	}

	return (perfect_nodes == nodes);
}
