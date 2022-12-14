#include "binary_trees.h"

/**
 * binary_tree_nodes - returns number of nodes
 * @tree: input tree
 * Return: number of nodes
 *
 */
size_t binary_tree_nodes(const binary_tree_t *tree)
{
	size_t le, re;

	if (tree == NULL)
		return (0);
	if (tree && tree->left == NULL && tree->right == NULL)
		return (0);
	le = binary_tree_nodes(tree->left);
	re = binary_tree_nodes(tree->right);
	return (le + re + 1);
}

