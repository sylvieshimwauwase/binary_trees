#include "binary_trees.h"

/**
 * binary_tree_balance - measure the balance of tree
 * @tree: root node to measure
 *
 * Return: balance of tree
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	size_t l_height, r_height;

	if (tree == NULL)
		return (0);

	l_height = tree->left ? 1 + binary_tree_height(tree->left) : 1;
	r_height = tree->right ?  1 + binary_tree_height(tree->right) : 1;

	return (l_height - r_height);
}
