#include "binary_trees.h"

/**
 * binary_tree_size - finds size of a tree
 * @tree: input tree
 * Return: the size
 */
size_t binary_tree_size(const binary_tree_t *tree)
{
	size_t le, re;

	if (tree == NULL)
		return (0);
	le = binary_tree_size(tree->left);
	re = binary_tree_size(tree->right);
	return (re + le + 1);
}

