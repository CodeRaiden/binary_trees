#include "binary_trees.h"

/**
 * binary_tree_sibling - function finds a sibling of a node
 * @node: node to use to find sibling
 * Return: sibling of node else return 0
 */
binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	if (node == NULL || !node->parent)
		return (NULL);
	if (node->parent && node->parent->left != node)
		return (node->parent->left);
	return (node->parent->right);
}

