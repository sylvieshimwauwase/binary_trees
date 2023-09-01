#include "binary_trees.h"

/**
 * binary_tree_is_root - check if a node is a root
 * @node: node to check
 *
 * Return: 1 if node is a root
 */
int binary_tree_is_root(const binary_tree_t *node)
{
	if (node == NULL)
		return (0);

	return (node->parent == NULL);
}
