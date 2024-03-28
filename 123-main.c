#include <stdio.h>
#include "binary_trees.h"

/**
* main - Entry point
*
* Return: Always 0 (Success)
*/
int main(void)
{
	/* Create an AVL tree */
	avl_t *root = NULL;

	/* Insert some nodes into the AVL tree */
	avl_insert(&root, 10);
	avl_insert(&root, 5);
	avl_insert(&root, 20);
	avl_insert(&root, 3);
	avl_insert(&root, 7);
	avl_insert(&root, 15);
	avl_insert(&root, 25);

	/* Print the AVL tree */
	printf("Original AVL tree:\n");
	binary_tree_print(root);

	/* Remove a node from the AVL tree */
	root = avl_remove(root, 20);
	printf("\nAVL tree after removing node with value 20:\n");
	binary_tree_print(root);

	/* Clean up memory */
	binary_tree_delete(root);

	return (0);
}
