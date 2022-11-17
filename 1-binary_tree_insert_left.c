#include "binary_trees.h"

/**
 * binary_tree_insert_left - inserts a node at the left
 * @parent: input parent node
 * @value: input value
 * Return: new node
 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *left_c;

	if (parent == NULL)
		return (NULL);
	left_c = binary_tree_node(parent, value);
	if (parent->left)
		left_c->left = parent->left;
		parent->left->parent = left_c;
		parent->left = left_c;
	parent->left = left_c;
	return (left_c);
}

