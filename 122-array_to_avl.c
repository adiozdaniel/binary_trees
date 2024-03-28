#include "binary_trees.h"

/**
 * array_to_avl - this creates an AVL tree from an array
 * @array: array of values
 * @size: length of the array
 *
 * Return: A pointer to the AVL tree, OR NULL.
 */
avl_t *array_to_avl(int *array, size_t size)
{
	size_t i;
	avl_t *root = NULL;

	if (array != NULL)
	{
		for (i = 0; i < size; i++)
		{
			avl_insert(&root, *(array + i));
		}
	}
	return (root);
}
