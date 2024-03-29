#include "binary_trees.h"

/**
 * binary_tree_uncle - finds the uncle of a node
 * @node: pointer to the node to find the uncle
 *
 * Return: pointer to the uncle node or NULL
 */
binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	binary_tree_t *node_uncle = NULL;

	if (!node)
		return (NULL);

	node_uncle = binary_tree_sibling(node->parent);
	if (!node_uncle)
		return (NULL);

	return (node_uncle);
}

/**
 * binary_tree_sibling -  finds the sibling of a node
 * @node: pointer to the node to find the sibling
 *
 * Return: pointer to the sibling node or NULL
 */
binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	binary_tree_t *node_sibling = NULL;

	if (!node || !node->parent)
		return (NULL);

	if ((node->parent->right == node) || (node->parent->left == node))
	{
		if (node->parent->left == node)
			node_sibling = node->parent->right;
		else
			node_sibling = node->parent->left;
		return (node_sibling);
	}

	return (NULL);
}
