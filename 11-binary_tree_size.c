#include "binary_trees.h"

size_t binary_tree_size(const binary_tree_t *tree)
{
	size_t n_left, n_right, n_total;

	if (tree == NULL)
		return (0);
	n_left = binary_tree_size(tree->left);
	n_right = binary_tree_size(tree->right);
	n_total = 1 + n_left + n_right;
	return(n_total);
}
