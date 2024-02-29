#include <stdlib.h>
#include "binary_trees.h"

/**
 * binary_tree_size - function that calculate tree size of the tree.
 * @tree: root of the tree
 * Return: Size of the tree.
 */

size_t binary_tree_size(const binary_tree_t *tree)
{
	size_t tree_size = 0;

	if (tree)
	{
		tree_size += 1;
		tree_size += binary_tree_size(tree->left);
		tree_size += binary_tree_size(tree->right);
	}

	return (tree_size);
}
