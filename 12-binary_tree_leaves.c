#include "binary_trees.h"

/**
 * binary_tree_leaves - counts leaves in a tree
 * @tree: input tree
 * Return: number of leaves
 *
 */
size_t binary_tree_leaves(const binary_tree_t *tree)
{
	size_t le, re;

	if (tree == NULL)
		return (0);
	if (tree->left == NULL && tree->right == NULL)
		return (1);
	le = binary_tree_leaves(tree->left);
	re = binary_tree_leaves(tree->right);
	return (le + re);
}

