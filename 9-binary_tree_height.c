#include <stdlib.h>
#include "binary_trees.h"

/**
 * recurison_func - recurison function for binary_tree_height.
 * @tree: current node.
 * @height: current height.
 * Return: height of the tree.
 */

size_t recurison_func(const binary_tree_t *tree, size_t height)
{
	if (!tree)
		return (height + 0);
	height++;

	size_t left_height = recurison_func(tree->left, height);
	size_t right_height = recurison_func(tree->right, height);

	if (left_height > right_height)
		return (left_height);
	else
		return (right_height);

}
/**
 * binary_tree_height - function that calculate height of the tree.
 * @tree: root of the tree
 * Return: height of the tree.
 */

size_t binary_tree_height(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);
	return (recurison_func(tree, -1));
}
