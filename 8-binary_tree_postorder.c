#include <stdlib.h>
#include "binary_trees.h"

/**
 * binary_tree_postorder - function that traverse tree by postorder.
 * @tree: root of the tree.
 * @func: print function
 * Return: void.
 */

void binary_tree_postorder(const binary_tree_t *tree, void (*func)(int))
{
	if (!tree)
		return;

	binary_tree_postorder(tree->left, func);
	binary_tree_postorder(tree->right, func);
	func(tree->n);
}
