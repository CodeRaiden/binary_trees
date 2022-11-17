#include "binary_trees.h"

/**
 * binary_tree_insert_right - insert node at the right
 * @parent: input parent node
 * @value: input value
 * Return: new node
 */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *right_c;

	if (parent == NULL)
		return (NULL);
	right_c = malloc(sizeof(binary_tree_t));
	if (right_c == NULL)
                return (NULL);
	right_c->n = value;
	right_c->parent = parent;
	right_c->left = right->right = NULL;

	if (parent->right == NULL)
		parent->right = right_c;
	else
	{
		right_c->right = parent->right;
		parent->right->parent = right_c;
		parent->right = right_c;
	}
	return (right_c);
}
