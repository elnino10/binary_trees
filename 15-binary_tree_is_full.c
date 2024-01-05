#include "binary_trees.h"

/**
 * binary_tree_is_full - checks if a binary tree is full
 * @tree: pointer to the root node of the tree to check
 *
 * Return: 1 if full or 0 otherwise
 */
int binary_tree_is_full(const binary_tree_t *tree)
{
	int left_node, right_node;

	if (!tree)
		return (0);

	left_node = binary_tree_is_full(tree->left);
	right_node = binary_tree_is_full(tree->right);

	if ((left_node && right_node) || (!left_node && !right_node))
		return (1);

	return (0);
}
