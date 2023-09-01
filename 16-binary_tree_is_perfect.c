#include "binary_trees.h"

/**
 * binary_tree_is_perfect - checks if binary is perfect
 * @tree: root node of the tree
 *
 * Return: 1 if tree is perfect otherwise 0
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	size_t height, leaves;

	if (tree == NULL)
		return (0);

	height = binary_tree_height(tree);
	leaves = (size_t)1 << height;

	return (binary_tree_is_full(tree) && leaves == binary_tree_height(tree));
}
