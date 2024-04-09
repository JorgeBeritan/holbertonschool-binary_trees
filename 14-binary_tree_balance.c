#include "binary_trees.h"

size_t
binary_tree_height(const binary_tree_t *tree)
{
	int  h_left = 1, h_right = 1;

	if (tree == NULL)
		return (0);
	if (tree->left)
		h_left += binary_tree_height(tree->left);
	if (tree->right)
		h_right += binary_tree_height(tree->right);
	if (h_left > h_right)
		return (h_left);
	else
		return (h_right);
	return (0);
}

int
binary_tree_balance(const binary_tree_t *tree)
{
	int n_total = 0;

	if (tree == NULL)
		return (0);
	n_total = binary_tree_height(tree->left) - binary_tree_height(tree->right);
	return (n_total);
}
