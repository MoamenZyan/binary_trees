#include <stdlib.h>
#include "binary_trees.h"

/**
 * binary_tree_insert_left - function to insert node to left of it's parent.
 * @parent: parent of the node.
 * @value: value of the node.
 * Return: the new node.
 */

binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	if (parent == NULL)
		return (NULL);
	binary_tree_t *new = malloc(sizeof(binary_tree_t));

	if (new == NULL)
		return (NULL);


	new->n = value;
	new->left = NULL;
	new->right = NULL;
	new->parent = parent;

	if (parent->left != NULL)
	{
		new->left = parent->left;
		new->left->parent = new;
		parent->left = new;
	}
	else
	{
		parent->left = new;
	}

	return (new);
}
