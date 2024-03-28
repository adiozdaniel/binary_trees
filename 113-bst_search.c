#include "binary_trees.h"

/**
 * bst_search - this function finds a node with a given value
 * in a binary search tree.
 * @tree: binary search tree!!!
 * @value: value of the node!!!
 *
 * Return: pointer to the found node, OR NULL
 */
bst_t *bst_search(const bst_t *tree, int value)
{
	bst_t *node = NULL;

	if (tree != NULL)
	{
		if (tree->left != NULL)
			node = tree->left->parent;
		if ((node == NULL) && (tree->right != NULL))
			node = tree->right->parent;
		while (node != NULL)
		{
			if (node->n < value)
				node = node->right;
			else if (node->n > value)
				node = node->left;
			else
				break;
		}
	}
	return (node);
}
