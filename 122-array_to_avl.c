#include "binary_trees.h"

/**
 * array_to_avl - builds an AVL tree from an array
 * @array: the array from which to build the AVL
 * @size: size of array
 *
 * Return: If array is NULL or memory allocation fails, return NULL.
 * else, return a pointer to the root of the resulting tree.
 */
avl_t *array_to_avl(int *array, size_t size)
{
	avl_t *tree = NULL;

	if (array)
	{
		while (size--)
			avl_insert(&tree, *array++);
	}
	return (tree);
}

