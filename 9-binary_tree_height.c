#include <stdlib.h>
#include "binary_trees.h"

/**
 * max - Function to get the max of two numbers.
 * @num1: number1.
 * @num2: number2.
 * Return: max of the two numbers.
 */

size_t max(size_t num1, size_t num2)
{
	if (num1 > num2)
		return (num1);
	else
		return (num2);
}
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

		return max(left_height, right_height) + 1;
}
