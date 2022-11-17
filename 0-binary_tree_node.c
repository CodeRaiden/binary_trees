#include "binary_trees.h"

/**
 * binary_tree_node - created a binary tree node
 * @parent: parent node
 * @value: value of the node
 * Return: Null on failure or ptr to new node
 */

binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *newNode;

	newNode = malloc(sizeof(binary_tree_t));
	if (newNode == NULL)
		return (NULL);
	newNode = perent;
	newNode->n = value;
	newNode->left = newNode->right = NULL;
	return (newNode);
}

