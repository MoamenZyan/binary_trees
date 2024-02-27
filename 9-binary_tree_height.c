#include <stdlib.h>
#include "binary_trees.h"

/**
 * binary_tree_height - function that calculate height of the tree.
 * @tree: root of the tree
 * Return: height of the tree.
 */

size_t binary_tree_height(const binary_tree_t *tree)
{
	if (tree == NULL || (tree->left == NULL && tree->right == NULL))
		return (0);

	size_t left_height = binary_tree_height(tree->left);
	size_t right_height = binary_tree_height(tree->right);

	if (left_height > right_height)
	{
		return (left_height + 1);
	}
	else
	{
		return (right_height + 1);
	}
}
