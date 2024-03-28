#include "binary_trees.h"

/**
 * bst_insert - this inserts a value into a Binary Search Tree
 * @tree: pointer to the binary search tree to modify.
 * @value: value to insert into the tree!
 *
 * Return: pointer to the created node, otherwise NULL!
 * @Adioz
 */
bst_t *bst_insert(bst_t **tree, int value)
{
	bst_t *new_node = NULL, *parent = NULL;

	if (tree != NULL)
	{
		parent = *tree;
		if (*tree == NULL)
		{
			new_node = binary_tree_node(*tree, value);
			*tree = new_node;
		}
		else
		{
			while (parent != NULL)
			{
				if ((parent->n > value) && (parent->left != NULL))
					parent = parent->left;
				else if ((parent->n < value) && (parent->right != NULL))
					parent = parent->right;
				else
					break;
			}
			if (parent->n < value)
			{
				new_node = binary_tree_node(parent, value);
				parent->right = new_node;
			}
			else if (parent->n > value)
			{
				new_node = binary_tree_node(parent, value);
				parent->left = new_node;
			}
		}
	}
	return (new_node);
}
