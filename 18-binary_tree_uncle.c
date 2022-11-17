#include "binary_trees.h"

/**
 * binary_tree_uncle - function finds the uncle of a node
 * @node: node whose uncle is to be found
 * Return: Null else return ptr to uncle
 */
binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	binary_tree_t *common;

	if (node == NULL || node->parent == NULL)
		return (NULL);

	common = node->parent;

	if (common->parent && common->parent->right != common)
		return (common->parent->right);
	if (common->parent && common->parent->left != common)
		return (common->parent->left);
	return (NULL);
}
