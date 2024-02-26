#include <stdlib.h>
#include "binary_trees.h"
/**
 * binary_tree_node - Function to create new tree node.
 * @parent: parent of the new node.
 * @value: value of the new node.
 * Return: The New Node.
*/

binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *new = malloc(sizeof(binary_tree_t));

	if (new == NULL)
	{
		return (NULL);
	}
	new->n = value;
	new->parent = parent;
	new->left = NULL;
	new->right = NULL;

	return (new);
}
