#include "binary_trees.h"

/**
 * binary_tree_height - checks for the height of a node
 * @tree: input tree
 * Return: height
 *
 *
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t le, re;

	if (tree == NULL || (tree->left && tree->right == NULL))
		return (0);
	le = binary_tree_height(tree->left) + 1;
	re = binary_tree_height(tree->right) + 1;
	if (le > re)
		return (le);
	return (re);
}

