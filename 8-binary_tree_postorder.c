#include "binary_trees.h"

/**
 * binary_tree_postorder -performs post-order traversal
 * @tree: root node to traverse
 * @func: function to call
 */
void binary_tree_postorder(const binary_tree_t *tree, void (*func)(int))
{
	 if (tree == NULL || func == NULL)
		 return;

	 binary_tree_postorder(tree->left, func);
	 binary_tree_postorder(tree->right, func);
	 func(tree->n);
}
