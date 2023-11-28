#include "binary_trees.h"

/**
 * binary_tree_insert_right - inserts a node as a child of a given parent
 * @parent: parent given node
 * @value: the value of the new node
 * Return: pointer to created node or NULL in failure
*/

binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *new;

	if (!parent)
		return (NULL);
	new = malloc(sizeof(binary_tree_t));
	if (!new)
		return (NULL);

	if (parent->right)
	{
		new->right = parent->right;
		new->right->parent = new;
	}
	else
		new->right = NULL;

	parent->right = new;
	new->parent = parent;
	new->n = value;
	new->left = NULL;

	return (new);
}
