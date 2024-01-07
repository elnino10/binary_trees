#include "binary_trees.h"

/**
 * binary_trees_ancestor - finds the lowest common ancestor of two nodes
 * @first: pointer to the first node
 * @second: pointer to the second node
 *
 * Return: pointer to the lowest common ancestor node of the two given nodes
 * or NULL if not found
 */
binary_tree_t *binary_trees_ancestor(
		const binary_tree_t *first, const binary_tree_t *second)
{
	if (!first || !second)
		return (NULL);

    /*nodes are the same. Hence, they are their own ancestor*/
	if (first == second)
		return ((binary_tree_t *)first);

	if (binary_trees_ancestor(first->parent, second))
		return (first->parent);
	if (binary_trees_ancestor(first, second->parent))
		return (second->parent);

	return (NULL);
}
