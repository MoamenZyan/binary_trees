#include "binary_trees.h"

/**
 * binary_tree_depth - Function To Get Depth Of A Node
 * @tree: The Node.
 * Return: Depth Of The Node.
*/

size_t binary_tree_depth(const binary_tree_t *tree)
{

	if (tree->n == NULL)
		return (0);

	size_t depth = 0;

	while (tree->parent != NULL)
	{
		depth++;
		tree = tree->parent;
	}

	return (depth);
}
