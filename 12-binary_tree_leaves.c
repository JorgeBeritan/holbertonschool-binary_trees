#include "binary_trees.h"

int
binary_tree_is_leaf(const binary_tree_t *node)
{
	if (node == NULL)
		return (0);
	if (node->right == NULL && node->left == NULL)
		return (1);
	else
		return (0);
}

size_t
binary_tree_leaves(const binary_tree_t *tree)
{
	size_t n_total = 0, i, j, k;

	if (tree == NULL)
	{
		return (0);
	}
	else
	{
		i = binary_tree_is_leaf(tree);
		j = binary_tree_leaves(tree->right);
		k = binary_tree_leaves(tree->left);
		n_total = i + j + k;
	}

	return (n_total);
}
