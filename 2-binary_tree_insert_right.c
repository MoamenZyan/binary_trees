#include <stdlib.h>
#include "binary_trees.h"

/**
 * binary_tree_insert_right - function to insert a new node to it's parent right.
 * @parent: parent of the new node.
 * @value: value of the new node.
 * Return: the new node.
 */

binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *new = malloc(sizeof(binary_tree_t));
	
	if (new == NULL || parent == NULL)
		return (NULL);

	new->n = value;
	new->left = NULL;
	new->right = NULL;
	new->parent = parent;

	if (parent->right != NULL)
	{
		new->right = parent->right;
		new->right->parent = new;
		parent->right = new;
	}
	else
	{
		parent->right = new;
	}

	return (new);
}
