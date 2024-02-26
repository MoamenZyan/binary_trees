#include <stdlib.h>
#include "binary_trees.h"

/**
 * binary_tree_delete - function to free all tree node.
 * @tree: root of the tree.
 * Return: void.
 */

void binary_tree_delete(binary_tree_t *tree)
{
	if (!tree)
		return;

	binary_tree_delete(tree->left);
	binary_tree_delete(tree->right);
	free(tree);
}
