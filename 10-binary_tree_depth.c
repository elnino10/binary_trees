#include "binary_trees.h"

/**
 * binary_tree_depth - measures the depth of a node in a binary tree
 * @tree: pointer to the node to measure the depth
 *
 * Return: depth of node or 0
 */
size_t binary_tree_depth(const binary_tree_t *tree)
{
	size_t node_depth;

	if (!tree)
		return (0);

	if (tree->parent)
	{
		node_depth = binary_tree_depth(tree->parent);
		return (node_depth + 1);
	}

	return (0);
}
