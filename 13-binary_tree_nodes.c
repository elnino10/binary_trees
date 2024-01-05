#include "binary_trees.h"

/**
 * binary_tree_nodes - counts the nodes with at least 1 child in a binary tree
 * @tree: pointer to the root node of the tree to count the number of nodes
 *
 * Return: count of inner nodes or 0
 */
size_t binary_tree_nodes(const binary_tree_t *tree)
{
	size_t left_node, right_node;

	if (!tree)
		return (0);

	if (tree->left || tree->right)
	{
		left_node = binary_tree_nodes(tree->left);
	    right_node = binary_tree_nodes(tree->right);
		return (left_node + right_node + 1);
	}
	return (0);
}
