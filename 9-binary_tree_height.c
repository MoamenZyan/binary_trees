#include <stdlib.h>
#include "binary_trees.h"

/**
 * binary_tree_height - function that calculate height of the tree.
 * @tree: root of the tree
 * Return: height of the tree.
 */

size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t left_height, right_height;

	if (tree == NULL)
		return (0);

	if (tree->parent == NULL)
	{
		binary_tree_depth(tree->left);
		binary_tree_depth(tree->right);
	}
	else if (tree->left != NULL || tree->right != NULL)
	{
		left_height = binary_tree_depth(tree->left) + 1;
		right_height = binary_tree_depth(tree->right) + 1;
	}
	else
	{
		left_height = 0;
		right_height = 0;
	}

	if (left_height > right_height)
		return (left_height);
	else
		return (right_height);
}
