#include "binary_trees.h"

size_t
binary_tree_height(const binary_tree_t *tree)
{
	if (tree)
	{
		int left = 0, right = 0;

		if (tree->right)
			right = 1 + binary_tree_height(tree->right);
		if (tree->left)
			left = 1 + binary_tree_height(tree->left);
		if (left > right)
			return (left);
		else
			return (right);
	}
	else
		return (0);
}

size_t
binary_tree_size(const binary_tree_t *tree)
{
	unsigned int left, right, n_total = 0;

	if (tree == NULL)
		return (0);

	left = binary_tree_size(tree->left);
	right = binary_tree_size(tree->right);
	n_total = left + right;
	return (1 + n_total);
}

int
binary_tree_is_perfect(const binary_tree_t *tree)
{
	unsigned int h = 0, size = 0;

	if (tree == NULL)
		return (0);

	h = binary_tree_height(tree);
	size = (1 << (h + 1)) - 1;
	if (size == binary_tree_size(tree))
		return (1);
	else
		return (0);
}
