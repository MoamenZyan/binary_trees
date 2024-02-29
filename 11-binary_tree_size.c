#include "binary_trees.h"

/**
 * binary_tree_size - function that calculate size of the tree.
 * @tree: root of the tree
 * Return: size of the tree.
 */

size_t binary_tree_size(const binary_tree_t *tree)
{
	size_t left_size, right_size;

	if (tree == NULL)
		return (0);

	if (tree->parent == NULL)
	{
		left_size = binary_tree_size(tree->left);
		right_size = binary_tree_size(tree->right);
	}
		left_size = binary_tree_size(tree->left) + 1;
		right_size = binary_tree_size(tree->right) + 1;

	if (tree->parent != NULL)
	{
		if (left_size > right_size)
			return (left_size);
		else
			return (right_size);
	}
	else
	{
		if (left_size > right_size)
			--left_size;
		else
			--right_size;
		return (left_size + right_size);
	}
}
