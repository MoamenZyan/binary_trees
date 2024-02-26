#include <stdlib.h>
#include "binary_trees.h"


/**
 * binary_tree_is_root - function to check if the node is a root.
 * @node: pointer to the node.
 * Return: 1 if root 0 if not.
 */

int binary_tree_is_root(const binary_tree_t *node)
{
	if (!node)
		return (0);

	if (node->parent == NULL)
		return (1);
	else
		return (0);
}
